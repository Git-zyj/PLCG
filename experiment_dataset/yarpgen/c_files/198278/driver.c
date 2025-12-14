#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_6 = 586835913U;
int var_7 = 1409816415;
int var_8 = -1892276449;
int zero = 0;
unsigned long long int var_10 = 17468529687320794380ULL;
int var_11 = 1142037848;
unsigned int var_12 = 1548596885U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
