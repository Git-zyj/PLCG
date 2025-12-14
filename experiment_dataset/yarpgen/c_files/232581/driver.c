#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 572059639U;
unsigned char var_11 = (unsigned char)184;
unsigned int var_12 = 2997190414U;
int zero = 0;
unsigned long long int var_19 = 17629087577084690110ULL;
unsigned long long int var_20 = 14328127282746584785ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
