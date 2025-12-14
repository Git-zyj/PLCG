#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5685133976053318658ULL;
int var_4 = -1726583696;
unsigned int var_7 = 182627222U;
signed char var_15 = (signed char)-67;
int zero = 0;
long long int var_17 = 9042784524267910281LL;
short var_18 = (short)1768;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
