#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 818630871;
int var_8 = -1066197696;
unsigned long long int var_14 = 2649636518656168584ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)206;
unsigned long long int var_16 = 2821779722310885848ULL;
unsigned long long int var_17 = 4443387371049796990ULL;
void init() {
}

void checksum() {
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
