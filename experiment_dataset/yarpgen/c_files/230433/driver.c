#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -110879280;
unsigned long long int var_4 = 3307496834726251328ULL;
unsigned long long int var_5 = 16918340950471471273ULL;
int var_7 = 1767061901;
unsigned long long int var_8 = 6338431171796357276ULL;
int zero = 0;
int var_11 = -333259868;
unsigned long long int var_12 = 9330140440306632563ULL;
unsigned long long int var_13 = 9896925683233648445ULL;
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
