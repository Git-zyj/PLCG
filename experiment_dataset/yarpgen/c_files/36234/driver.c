#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1435218512;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-16277;
int var_5 = -1447393043;
signed char var_6 = (signed char)-7;
unsigned long long int var_7 = 2387195407783146371ULL;
_Bool var_8 = (_Bool)1;
int var_11 = 1071291635;
unsigned short var_13 = (unsigned short)17036;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 860191331;
unsigned int var_16 = 625683786U;
int var_17 = 944498381;
unsigned short var_18 = (unsigned short)40031;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
