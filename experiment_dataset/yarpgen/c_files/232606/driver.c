#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
short var_1 = (short)30767;
short var_2 = (short)15392;
unsigned long long int var_4 = 14635059324860306475ULL;
short var_5 = (short)20478;
int var_6 = -1062630462;
unsigned long long int var_7 = 13681921213128295232ULL;
unsigned int var_8 = 3601726735U;
int zero = 0;
unsigned char var_10 = (unsigned char)88;
int var_11 = 1975682382;
int var_12 = -1062717423;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
