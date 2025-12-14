#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2413468097143575262LL;
long long int var_1 = 4518312126016556968LL;
unsigned short var_2 = (unsigned short)32651;
signed char var_3 = (signed char)-57;
signed char var_4 = (signed char)66;
unsigned int var_6 = 144864738U;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 957038057U;
unsigned long long int var_12 = 1443414688752046760ULL;
int zero = 0;
unsigned int var_13 = 3469339923U;
long long int var_14 = -1636250079157834729LL;
signed char var_15 = (signed char)51;
short var_16 = (short)-20722;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
