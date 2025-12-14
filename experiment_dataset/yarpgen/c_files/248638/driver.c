#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)12356;
unsigned int var_6 = 3143804395U;
int var_9 = 608841649;
int var_10 = 1745210654;
long long int var_11 = -2585165931188450089LL;
unsigned char var_13 = (unsigned char)170;
unsigned long long int var_14 = 4876994875555824893ULL;
unsigned char var_15 = (unsigned char)60;
int zero = 0;
int var_16 = 1678406553;
long long int var_17 = -6005040703536263117LL;
void init() {
}

void checksum() {
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
