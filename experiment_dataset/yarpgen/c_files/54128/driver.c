#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)5;
unsigned long long int var_10 = 14043133097349353911ULL;
int zero = 0;
unsigned long long int var_12 = 7504521220092500259ULL;
unsigned long long int var_13 = 562079348893176461ULL;
unsigned long long int var_14 = 16597137104884354531ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
