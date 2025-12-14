#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 690455008823317263ULL;
unsigned int var_11 = 3477510998U;
unsigned short var_17 = (unsigned short)26660;
unsigned char var_19 = (unsigned char)221;
int zero = 0;
unsigned short var_20 = (unsigned short)16260;
int var_21 = -1114872769;
unsigned long long int var_22 = 3615037179666183604ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
