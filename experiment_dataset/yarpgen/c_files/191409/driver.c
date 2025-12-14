#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 542647128117419579LL;
unsigned short var_5 = (unsigned short)28488;
unsigned int var_7 = 3014979033U;
int zero = 0;
int var_11 = 1330821334;
unsigned short var_12 = (unsigned short)19243;
unsigned long long int var_13 = 16501492281562199533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
