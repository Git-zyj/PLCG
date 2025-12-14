#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12132516650153622593ULL;
short var_2 = (short)-29776;
int var_3 = 620643591;
unsigned short var_10 = (unsigned short)53611;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 366058009;
signed char var_16 = (signed char)-113;
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
