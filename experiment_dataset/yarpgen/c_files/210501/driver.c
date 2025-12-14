#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned char var_1 = (unsigned char)102;
unsigned char var_2 = (unsigned char)244;
int var_3 = -751931993;
int var_4 = 1032997370;
unsigned char var_6 = (unsigned char)12;
unsigned int var_7 = 1820488398U;
long long int var_10 = 315279919858710036LL;
short var_11 = (short)4148;
int zero = 0;
signed char var_12 = (signed char)-1;
unsigned int var_13 = 749028405U;
signed char var_14 = (signed char)19;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
