#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-19524;
unsigned char var_6 = (unsigned char)72;
short var_8 = (short)-4434;
short var_10 = (short)7756;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-24089;
unsigned long long int var_22 = 4277543317650440526ULL;
unsigned char var_23 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
