#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36950;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-104;
int var_5 = -1405020614;
unsigned long long int var_9 = 11582357532332424412ULL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-92;
int var_13 = 1874067502;
unsigned int var_16 = 2807914957U;
int zero = 0;
long long int var_17 = 386211670696073260LL;
unsigned long long int var_18 = 1440011923669334687ULL;
signed char var_19 = (signed char)-91;
long long int var_20 = -4727471635425924697LL;
unsigned long long int var_21 = 7294830915336516888ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
