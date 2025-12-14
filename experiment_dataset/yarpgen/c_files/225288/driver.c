#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
int var_4 = 1142207723;
unsigned long long int var_5 = 4210087624180174917ULL;
int zero = 0;
unsigned long long int var_13 = 8500535839135218268ULL;
unsigned int var_14 = 3461236592U;
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
