#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 427572748U;
signed char var_11 = (signed char)11;
int zero = 0;
unsigned char var_16 = (unsigned char)84;
long long int var_17 = 8143358661826659622LL;
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
