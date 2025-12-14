#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2511674733U;
unsigned int var_4 = 3536722098U;
unsigned int var_6 = 586453733U;
unsigned int var_9 = 2456648459U;
int zero = 0;
unsigned int var_10 = 685866557U;
unsigned int var_11 = 497941284U;
unsigned int var_12 = 228088199U;
unsigned int var_13 = 341310403U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
