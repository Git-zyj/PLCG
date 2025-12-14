#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6733264323271131148ULL;
unsigned int var_8 = 2449662524U;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5679174320464809177LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
