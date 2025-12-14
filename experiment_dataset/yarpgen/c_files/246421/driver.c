#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
int var_1 = 1902317932;
unsigned short var_3 = (unsigned short)13206;
int zero = 0;
unsigned long long int var_10 = 4166610190621827539ULL;
int var_11 = 1175393214;
unsigned int var_12 = 4265094558U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
