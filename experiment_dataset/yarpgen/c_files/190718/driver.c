#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 572421262751772841ULL;
unsigned long long int var_8 = 5025778372700268632ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)168;
unsigned long long int var_20 = 4234619148996265591ULL;
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
