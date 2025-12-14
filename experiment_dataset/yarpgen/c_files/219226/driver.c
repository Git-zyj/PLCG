#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3110542320439847045ULL;
unsigned char var_11 = (unsigned char)248;
unsigned char var_12 = (unsigned char)220;
int zero = 0;
unsigned char var_19 = (unsigned char)212;
int var_20 = 1273871451;
unsigned long long int var_21 = 14090135141584567432ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
