#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16015402999865565404ULL;
unsigned long long int var_2 = 12353141384611194463ULL;
unsigned long long int var_13 = 672559512655453712ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)217;
int var_16 = 1354851949;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
