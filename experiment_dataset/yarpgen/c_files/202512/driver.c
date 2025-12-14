#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38889;
unsigned long long int var_7 = 6277189888884415482ULL;
int var_9 = -477643644;
int zero = 0;
unsigned char var_17 = (unsigned char)11;
unsigned int var_18 = 2244143530U;
unsigned int var_19 = 4219062617U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
