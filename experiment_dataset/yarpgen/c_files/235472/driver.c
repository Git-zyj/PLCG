#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)233;
unsigned long long int var_5 = 14305161092692234782ULL;
unsigned int var_10 = 3205800749U;
long long int var_13 = -5220131879452681664LL;
int zero = 0;
unsigned char var_17 = (unsigned char)6;
signed char var_18 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
