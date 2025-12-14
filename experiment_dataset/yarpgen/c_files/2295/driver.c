#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11941614380166804195ULL;
short var_5 = (short)27977;
signed char var_7 = (signed char)-60;
int var_12 = -162239357;
int zero = 0;
long long int var_18 = 613198534348706407LL;
unsigned int var_19 = 3769309668U;
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
