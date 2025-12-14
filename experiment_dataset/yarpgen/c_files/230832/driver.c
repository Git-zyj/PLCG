#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2007992191;
signed char var_10 = (signed char)0;
long long int var_15 = 6183466806497294044LL;
int zero = 0;
unsigned long long int var_20 = 4355013270587590938ULL;
long long int var_21 = 1969891214161156895LL;
unsigned long long int var_22 = 2482421107659667301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
