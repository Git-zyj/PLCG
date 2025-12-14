#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2893949376318185408LL;
long long int var_8 = -605710155425759577LL;
signed char var_15 = (signed char)-95;
int zero = 0;
int var_16 = -1491758997;
unsigned long long int var_17 = 18363398379124747535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
