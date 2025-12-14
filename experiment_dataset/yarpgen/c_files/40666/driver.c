#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1041548809716674088ULL;
short var_3 = (short)6726;
short var_8 = (short)-6738;
unsigned long long int var_11 = 4373492745273502731ULL;
int zero = 0;
short var_14 = (short)11442;
short var_15 = (short)-29837;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
