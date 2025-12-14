#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2320946790U;
unsigned int var_4 = 3767021675U;
unsigned short var_5 = (unsigned short)46873;
unsigned char var_7 = (unsigned char)238;
unsigned int var_8 = 590302777U;
int zero = 0;
short var_15 = (short)-647;
int var_16 = 1498553053;
long long int var_17 = -6231926620710701784LL;
unsigned short var_18 = (unsigned short)34005;
int var_19 = 1088607509;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
