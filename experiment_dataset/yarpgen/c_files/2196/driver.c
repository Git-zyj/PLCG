#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6483380020453758277ULL;
unsigned char var_2 = (unsigned char)91;
signed char var_7 = (signed char)-106;
unsigned char var_12 = (unsigned char)251;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3982790443U;
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
