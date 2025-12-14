#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32067;
unsigned char var_5 = (unsigned char)187;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-124;
unsigned char var_13 = (unsigned char)111;
int zero = 0;
int var_14 = -1634964156;
signed char var_15 = (signed char)123;
short var_16 = (short)-11727;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
