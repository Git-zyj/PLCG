#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5585;
unsigned int var_3 = 552996011U;
signed char var_6 = (signed char)-5;
signed char var_8 = (signed char)-7;
short var_13 = (short)-32066;
long long int var_14 = -6053842470835976608LL;
unsigned char var_15 = (unsigned char)8;
unsigned long long int var_16 = 1408845778483971279ULL;
unsigned int var_17 = 3351281799U;
int zero = 0;
long long int var_18 = 53954283292132159LL;
long long int var_19 = 1760907066945621145LL;
signed char var_20 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
