#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1411085489;
int var_5 = -1236468057;
unsigned char var_8 = (unsigned char)255;
int zero = 0;
unsigned long long int var_19 = 7353134109993520664ULL;
int var_20 = 1483284832;
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
