#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1327953264U;
int var_6 = -1767914800;
long long int var_8 = -8792211219371841743LL;
unsigned char var_12 = (unsigned char)221;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 191236976;
unsigned long long int var_16 = 8682819388736891127ULL;
long long int var_17 = 8660849181184882600LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
