#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)88;
unsigned int var_5 = 1558014467U;
long long int var_8 = -4016674719389486506LL;
signed char var_9 = (signed char)-94;
unsigned long long int var_10 = 12316442898660566281ULL;
long long int var_11 = 6459363581812262397LL;
int zero = 0;
unsigned char var_12 = (unsigned char)10;
unsigned int var_13 = 1326603949U;
long long int var_14 = 1096624498484878351LL;
void init() {
}

void checksum() {
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
