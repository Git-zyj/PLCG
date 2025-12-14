#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 966392053092983222ULL;
short var_10 = (short)11547;
short var_11 = (short)-2563;
int zero = 0;
unsigned long long int var_15 = 15115882432561222998ULL;
short var_16 = (short)-11781;
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
