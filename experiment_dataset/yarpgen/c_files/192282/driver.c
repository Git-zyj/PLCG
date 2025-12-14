#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4684954685170430014ULL;
long long int var_10 = -7267974618774520014LL;
int zero = 0;
signed char var_12 = (signed char)-77;
unsigned int var_13 = 401364760U;
unsigned char var_14 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
