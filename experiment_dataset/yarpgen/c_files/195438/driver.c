#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
unsigned char var_5 = (unsigned char)59;
_Bool var_8 = (_Bool)0;
unsigned long long int var_15 = 7410969201545410728ULL;
int zero = 0;
int var_16 = 911932803;
signed char var_17 = (signed char)-32;
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
