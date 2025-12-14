#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-8284;
unsigned long long int var_14 = 12100258795413892173ULL;
unsigned long long int var_15 = 4008367365437282ULL;
int zero = 0;
unsigned long long int var_19 = 6869648139997636687ULL;
short var_20 = (short)-12094;
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
