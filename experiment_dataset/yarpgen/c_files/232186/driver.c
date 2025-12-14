#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8427792911338181659ULL;
signed char var_5 = (signed char)36;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 12535590875592954049ULL;
short var_11 = (short)-1053;
int zero = 0;
short var_18 = (short)20059;
short var_19 = (short)14159;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
