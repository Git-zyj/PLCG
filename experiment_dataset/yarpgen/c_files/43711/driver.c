#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)322;
unsigned long long int var_10 = 16253594556740913727ULL;
int var_13 = -1785665113;
int zero = 0;
unsigned long long int var_14 = 16742146541707214221ULL;
unsigned long long int var_15 = 89619078339616277ULL;
unsigned long long int var_16 = 6399118578440809471ULL;
long long int var_17 = -6602044015243851939LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
