#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4020853997U;
unsigned char var_1 = (unsigned char)75;
int var_2 = -2111495654;
signed char var_3 = (signed char)111;
unsigned char var_4 = (unsigned char)201;
unsigned long long int var_7 = 3286631197316886636ULL;
int zero = 0;
unsigned long long int var_10 = 17010982019696337066ULL;
unsigned short var_11 = (unsigned short)1429;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
