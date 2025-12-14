#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14795;
long long int var_3 = -6180171532972996983LL;
signed char var_4 = (signed char)-30;
int var_9 = -1109649971;
short var_10 = (short)17280;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)7938;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
