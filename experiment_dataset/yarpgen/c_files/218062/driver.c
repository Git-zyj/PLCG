#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4080627615792195005LL;
long long int var_2 = -4488142812904932055LL;
unsigned char var_3 = (unsigned char)234;
unsigned short var_4 = (unsigned short)65313;
_Bool var_5 = (_Bool)1;
long long int var_7 = 2567785031521787129LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)84;
unsigned int var_11 = 4198451548U;
unsigned char var_12 = (unsigned char)151;
unsigned long long int var_13 = 3217191434560538840ULL;
unsigned int var_14 = 3447278306U;
unsigned short var_16 = (unsigned short)46317;
unsigned char var_18 = (unsigned char)1;
int zero = 0;
int var_20 = 794266403;
signed char var_21 = (signed char)77;
unsigned int var_22 = 3751673479U;
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
