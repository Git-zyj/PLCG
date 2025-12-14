#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1218867656;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 1579222861937729280ULL;
unsigned int var_7 = 2213376284U;
signed char var_9 = (signed char)-115;
int zero = 0;
int var_10 = -635077836;
unsigned short var_11 = (unsigned short)20629;
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
