#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30735;
short var_6 = (short)-17358;
unsigned char var_10 = (unsigned char)186;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)136;
int zero = 0;
unsigned short var_17 = (unsigned short)64689;
unsigned short var_18 = (unsigned short)41264;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
