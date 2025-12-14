#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1500824657U;
unsigned char var_3 = (unsigned char)51;
short var_4 = (short)-15697;
short var_5 = (short)-24730;
unsigned int var_6 = 2611141299U;
unsigned int var_14 = 1596698055U;
unsigned int var_15 = 804225846U;
unsigned int var_17 = 1496815863U;
int zero = 0;
unsigned int var_20 = 261822734U;
short var_21 = (short)21319;
short var_22 = (short)5289;
void init() {
}

void checksum() {
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
