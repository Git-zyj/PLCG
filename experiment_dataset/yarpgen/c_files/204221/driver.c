#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7396116287125543262LL;
unsigned int var_2 = 533979648U;
short var_3 = (short)21393;
unsigned short var_4 = (unsigned short)51265;
short var_5 = (short)-3404;
unsigned int var_6 = 1791132239U;
unsigned long long int var_7 = 3808314583073097360ULL;
unsigned int var_9 = 2566380946U;
int var_10 = -1541802572;
int zero = 0;
unsigned int var_11 = 682218879U;
unsigned char var_12 = (unsigned char)47;
short var_13 = (short)8583;
signed char var_14 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
