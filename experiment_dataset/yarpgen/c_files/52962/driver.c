#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1685504879U;
unsigned char var_5 = (unsigned char)223;
unsigned int var_6 = 4022095114U;
unsigned long long int var_11 = 1916550660110817563ULL;
unsigned long long int var_13 = 12947022909819399405ULL;
long long int var_15 = 993762733398414547LL;
int var_18 = 1120835807;
int zero = 0;
long long int var_20 = 5315323002371790609LL;
long long int var_21 = -6530071086482669293LL;
unsigned long long int var_22 = 1015978304841651623ULL;
int var_23 = -503778477;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
