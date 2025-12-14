#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 614359453;
int var_2 = 971266517;
int var_3 = -1912435413;
unsigned long long int var_9 = 10537138188204214332ULL;
unsigned int var_10 = 4151888761U;
int zero = 0;
unsigned long long int var_13 = 10597586980334786839ULL;
unsigned long long int var_14 = 3264245493348508149ULL;
unsigned char var_15 = (unsigned char)251;
int var_16 = 576164052;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
