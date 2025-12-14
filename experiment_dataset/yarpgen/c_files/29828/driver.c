#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1340462638;
unsigned char var_5 = (unsigned char)53;
unsigned long long int var_7 = 7553070825081250974ULL;
int zero = 0;
short var_15 = (short)-21591;
unsigned char var_16 = (unsigned char)144;
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
