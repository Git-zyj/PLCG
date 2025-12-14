#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14665980492369642420ULL;
unsigned int var_10 = 7004762U;
int zero = 0;
unsigned long long int var_11 = 15000783665796299737ULL;
unsigned short var_12 = (unsigned short)33677;
unsigned int var_13 = 466238947U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
