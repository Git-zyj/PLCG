#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1542850452U;
unsigned int var_2 = 3450636562U;
unsigned int var_6 = 3865247214U;
unsigned int var_8 = 275542306U;
unsigned long long int var_10 = 2739856155894056668ULL;
int var_11 = 405013187;
unsigned char var_12 = (unsigned char)117;
int zero = 0;
unsigned short var_14 = (unsigned short)41199;
unsigned char var_15 = (unsigned char)206;
unsigned int var_16 = 1757568806U;
unsigned long long int var_17 = 17910093289139242192ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
