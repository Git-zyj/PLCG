#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4921351988106279250LL;
unsigned short var_2 = (unsigned short)44650;
unsigned long long int var_7 = 6566589819421823072ULL;
int zero = 0;
signed char var_19 = (signed char)-23;
unsigned long long int var_20 = 4668633132185575040ULL;
void init() {
}

void checksum() {
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
