#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
unsigned int var_5 = 2162946430U;
unsigned char var_10 = (unsigned char)15;
unsigned char var_14 = (unsigned char)248;
int zero = 0;
int var_16 = -1078135759;
unsigned long long int var_17 = 4166278760271149961ULL;
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
