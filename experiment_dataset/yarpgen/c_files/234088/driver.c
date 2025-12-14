#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1341466661;
int var_1 = 1986908151;
unsigned char var_5 = (unsigned char)93;
unsigned long long int var_13 = 655487674226141532ULL;
int zero = 0;
unsigned long long int var_16 = 7308876200459283477ULL;
signed char var_17 = (signed char)35;
void init() {
}

void checksum() {
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
