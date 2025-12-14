#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-110;
unsigned long long int var_5 = 279105639353855990ULL;
long long int var_6 = 3787543956342416984LL;
unsigned char var_7 = (unsigned char)36;
int zero = 0;
unsigned int var_12 = 3171474838U;
unsigned int var_13 = 2671422687U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
