#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27593;
unsigned int var_8 = 1372056646U;
unsigned short var_10 = (unsigned short)43183;
int zero = 0;
short var_16 = (short)26374;
long long int var_17 = -4696113730919127004LL;
int var_18 = 1313670100;
short var_19 = (short)-31647;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
