#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
long long int var_2 = -2795884375501757303LL;
unsigned int var_3 = 1341062970U;
unsigned int var_5 = 159495473U;
unsigned int var_9 = 1645046471U;
unsigned int var_13 = 3070961832U;
int zero = 0;
long long int var_16 = 6224023847178166196LL;
int var_17 = -1462816216;
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
