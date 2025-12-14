#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13704;
int var_3 = 906633125;
short var_5 = (short)31778;
unsigned int var_6 = 3169984712U;
unsigned long long int var_11 = 2765429763368608589ULL;
int zero = 0;
unsigned int var_13 = 3200426322U;
long long int var_14 = 493060513429513816LL;
void init() {
}

void checksum() {
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
