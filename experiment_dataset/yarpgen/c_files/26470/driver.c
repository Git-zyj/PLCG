#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3092387492130428421ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)120;
unsigned long long int var_18 = 6577016682153019204ULL;
unsigned long long int var_19 = 13196743089060505553ULL;
int var_20 = 1943543495;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
