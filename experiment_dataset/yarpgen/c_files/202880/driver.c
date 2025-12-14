#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned char var_2 = (unsigned char)78;
signed char var_6 = (signed char)104;
unsigned int var_9 = 2705021316U;
int zero = 0;
unsigned long long int var_10 = 6277820065804025571ULL;
unsigned long long int var_11 = 8368530213434131679ULL;
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
