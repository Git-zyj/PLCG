#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2071097487;
int var_4 = 650714414;
signed char var_6 = (signed char)-54;
signed char var_8 = (signed char)-107;
int var_13 = 141287917;
int zero = 0;
int var_15 = -1949245594;
int var_16 = 82345686;
unsigned int var_17 = 4119738329U;
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
