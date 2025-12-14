#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60640;
unsigned long long int var_5 = 4476481599918318376ULL;
long long int var_10 = 2279413840086316822LL;
int zero = 0;
unsigned long long int var_16 = 12954932925405437044ULL;
short var_17 = (short)2061;
signed char var_18 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
