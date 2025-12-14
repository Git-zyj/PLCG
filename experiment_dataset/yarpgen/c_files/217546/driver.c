#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32492;
unsigned char var_1 = (unsigned char)83;
unsigned int var_2 = 2439159372U;
unsigned int var_3 = 3062913395U;
unsigned long long int var_7 = 16693845950775305297ULL;
unsigned long long int var_9 = 1736769614668592855ULL;
int zero = 0;
unsigned long long int var_11 = 16190683352719991285ULL;
int var_12 = 568006191;
unsigned long long int var_13 = 15653327191359891185ULL;
void init() {
}

void checksum() {
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
