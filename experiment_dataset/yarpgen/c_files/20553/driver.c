#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14456897185006498759ULL;
int var_2 = -372657390;
long long int var_3 = -5760259310682637700LL;
unsigned long long int var_4 = 16331409061216660783ULL;
unsigned int var_8 = 840424284U;
int zero = 0;
unsigned char var_12 = (unsigned char)156;
long long int var_13 = 369822596033173865LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
