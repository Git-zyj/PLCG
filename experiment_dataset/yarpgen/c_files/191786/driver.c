#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5175486096704632683ULL;
unsigned char var_2 = (unsigned char)157;
long long int var_6 = -7441504279561270319LL;
int zero = 0;
unsigned long long int var_13 = 1335686661045954698ULL;
unsigned long long int var_14 = 17859380253405495216ULL;
int var_15 = 946566168;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
