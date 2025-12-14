#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 954488569;
unsigned char var_11 = (unsigned char)183;
signed char var_16 = (signed char)56;
int zero = 0;
unsigned long long int var_17 = 11219312483448972743ULL;
signed char var_18 = (signed char)6;
long long int var_19 = 6364821988541910897LL;
signed char var_20 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
