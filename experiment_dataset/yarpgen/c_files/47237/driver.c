#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1888941565;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 155379365U;
unsigned long long int var_6 = 12951343207042017638ULL;
short var_8 = (short)-1100;
int var_12 = -198856658;
int zero = 0;
unsigned long long int var_13 = 13693663574488277612ULL;
unsigned int var_14 = 3289354488U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
