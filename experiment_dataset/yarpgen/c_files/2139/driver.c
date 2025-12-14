#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7434569963439288972LL;
signed char var_3 = (signed char)-92;
short var_6 = (short)-13032;
unsigned short var_7 = (unsigned short)30769;
signed char var_10 = (signed char)17;
signed char var_11 = (signed char)43;
unsigned int var_12 = 2699129872U;
unsigned int var_13 = 3604908875U;
unsigned long long int var_14 = 8138903054814629603ULL;
unsigned long long int var_16 = 10113540891642184175ULL;
int zero = 0;
unsigned long long int var_17 = 8963956967105297533ULL;
unsigned int var_18 = 2575449309U;
unsigned short var_19 = (unsigned short)38574;
void init() {
}

void checksum() {
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
