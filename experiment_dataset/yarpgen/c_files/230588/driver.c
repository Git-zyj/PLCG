#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1497682330;
int var_11 = 2043652534;
unsigned int var_14 = 150319219U;
int zero = 0;
unsigned int var_17 = 113241610U;
unsigned int var_18 = 545280242U;
unsigned int var_19 = 3790431245U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
