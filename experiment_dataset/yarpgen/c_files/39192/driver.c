#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned int var_3 = 3954944164U;
unsigned int var_4 = 1116510881U;
long long int var_5 = -6900457124051310720LL;
unsigned int var_6 = 4021227569U;
unsigned char var_7 = (unsigned char)214;
unsigned long long int var_9 = 1436900417754755207ULL;
int zero = 0;
long long int var_10 = -9209656769094061910LL;
unsigned int var_11 = 3730294100U;
long long int var_12 = 9158772902997202722LL;
int var_13 = 1759726092;
unsigned int var_14 = 1604889219U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
