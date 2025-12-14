#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18233240479957503264ULL;
long long int var_7 = 823199955106252391LL;
int zero = 0;
unsigned int var_17 = 4190010513U;
unsigned long long int var_18 = 11331449887276421732ULL;
unsigned char var_19 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
