#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20349;
unsigned char var_9 = (unsigned char)78;
short var_15 = (short)-8264;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17673208161387300468ULL;
unsigned char var_21 = (unsigned char)35;
unsigned short var_22 = (unsigned short)5350;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
