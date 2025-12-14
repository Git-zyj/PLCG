#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9931707083366291733ULL;
unsigned int var_1 = 3204727391U;
int var_5 = 395683098;
int zero = 0;
signed char var_13 = (signed char)16;
unsigned short var_14 = (unsigned short)46013;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
