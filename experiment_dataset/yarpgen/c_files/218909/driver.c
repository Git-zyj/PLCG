#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned long long int var_2 = 12096799420831616464ULL;
long long int var_8 = 3474079739961850522LL;
long long int var_12 = 5393847236326633022LL;
int zero = 0;
int var_18 = 1264275558;
unsigned char var_19 = (unsigned char)247;
void init() {
}

void checksum() {
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
