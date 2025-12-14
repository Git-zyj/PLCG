#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
long long int var_2 = 4235145873226082949LL;
long long int var_5 = 4206837847277082277LL;
long long int var_12 = 2285410291356345525LL;
int zero = 0;
unsigned long long int var_14 = 1577650302559975940ULL;
long long int var_15 = 6780456279125128179LL;
int var_16 = 818622046;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
