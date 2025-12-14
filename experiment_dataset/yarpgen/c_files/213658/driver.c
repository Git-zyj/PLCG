#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 813325516;
int var_7 = -1111447407;
int var_8 = -50634914;
long long int var_11 = -3026202713595595586LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1281409289U;
int var_17 = 801486091;
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
