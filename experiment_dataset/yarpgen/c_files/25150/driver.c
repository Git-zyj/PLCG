#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3942583572U;
unsigned char var_4 = (unsigned char)52;
signed char var_10 = (signed char)-90;
int zero = 0;
long long int var_13 = -4452052123054208620LL;
unsigned int var_14 = 155728033U;
unsigned int var_15 = 1193374220U;
long long int var_16 = 6743747545643116735LL;
int var_17 = 194404545;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
