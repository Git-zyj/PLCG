#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3181089723U;
unsigned long long int var_10 = 13817751791980994554ULL;
unsigned char var_12 = (unsigned char)78;
unsigned long long int var_13 = 12760339551035874834ULL;
int zero = 0;
unsigned long long int var_15 = 2216652016553695169ULL;
unsigned long long int var_16 = 1756556699629381825ULL;
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
