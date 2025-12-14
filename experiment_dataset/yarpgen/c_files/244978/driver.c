#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)34160;
unsigned int var_12 = 1561817951U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3930706941U;
unsigned short var_22 = (unsigned short)1845;
unsigned long long int var_23 = 2068399036662143335ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
