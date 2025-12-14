#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -250250460;
unsigned long long int var_1 = 6564948921342832290ULL;
int var_5 = 2138305755;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 482582280U;
int var_9 = -718584554;
int zero = 0;
unsigned char var_10 = (unsigned char)232;
int var_11 = 1554921263;
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
