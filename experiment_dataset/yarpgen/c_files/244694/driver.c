#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-52;
unsigned int var_15 = 4171968748U;
long long int var_17 = 4074269620220437703LL;
int zero = 0;
unsigned short var_19 = (unsigned short)53900;
unsigned short var_20 = (unsigned short)42541;
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
