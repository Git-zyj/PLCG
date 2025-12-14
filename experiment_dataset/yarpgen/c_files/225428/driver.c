#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1891113481116012414ULL;
unsigned long long int var_4 = 10799810123521635376ULL;
unsigned char var_5 = (unsigned char)216;
int zero = 0;
short var_15 = (short)-12573;
signed char var_16 = (signed char)120;
unsigned char var_17 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
