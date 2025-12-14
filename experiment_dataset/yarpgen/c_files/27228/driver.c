#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1960221963;
int var_8 = 305536985;
int var_12 = -2051196997;
unsigned long long int var_13 = 10383052148933465536ULL;
unsigned long long int var_14 = 571155630428226392ULL;
int zero = 0;
int var_16 = 2065651419;
short var_17 = (short)14096;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
