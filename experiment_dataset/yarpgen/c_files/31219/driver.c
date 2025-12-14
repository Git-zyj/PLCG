#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1320485414;
unsigned int var_9 = 3666060300U;
unsigned int var_10 = 953628717U;
unsigned short var_11 = (unsigned short)62935;
int zero = 0;
signed char var_14 = (signed char)21;
unsigned int var_15 = 3202182868U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
