#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1036273864U;
int var_2 = 1030067048;
int var_7 = -2007763085;
unsigned long long int var_10 = 8207644231822281955ULL;
int zero = 0;
int var_19 = -2046830547;
unsigned int var_20 = 671531356U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
