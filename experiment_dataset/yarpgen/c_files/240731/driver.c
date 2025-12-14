#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5977858943794889226LL;
int var_3 = -1642768447;
signed char var_5 = (signed char)-17;
long long int var_6 = -2624193831420888210LL;
unsigned int var_8 = 3626209389U;
int var_10 = 559815821;
int var_11 = 112324745;
short var_13 = (short)2405;
unsigned char var_14 = (unsigned char)249;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 701451735U;
unsigned int var_21 = 4213435990U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
