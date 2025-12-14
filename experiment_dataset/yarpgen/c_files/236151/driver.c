#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2307235984422776358ULL;
unsigned long long int var_3 = 2815945914828302495ULL;
unsigned long long int var_5 = 15433537400827660111ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)25329;
unsigned char var_11 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
