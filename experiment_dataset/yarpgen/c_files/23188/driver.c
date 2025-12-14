#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4214074210U;
signed char var_3 = (signed char)-64;
unsigned char var_4 = (unsigned char)79;
long long int var_7 = 5627911380834542413LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)13154;
int var_12 = 1290731118;
unsigned short var_13 = (unsigned short)27646;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)50259;
long long int var_16 = -5376242403101536963LL;
signed char var_17 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
