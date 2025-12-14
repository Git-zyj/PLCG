#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1809597443U;
unsigned int var_4 = 3792429403U;
unsigned int var_6 = 2821060305U;
unsigned int var_8 = 2430949344U;
int zero = 0;
unsigned int var_10 = 797440008U;
unsigned int var_11 = 2848099212U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
