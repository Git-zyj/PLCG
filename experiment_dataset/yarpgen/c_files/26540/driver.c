#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18258683998419237073ULL;
unsigned long long int var_5 = 491111588852232171ULL;
long long int var_9 = 6790764014273508128LL;
int zero = 0;
unsigned char var_11 = (unsigned char)156;
unsigned int var_12 = 2371897981U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
