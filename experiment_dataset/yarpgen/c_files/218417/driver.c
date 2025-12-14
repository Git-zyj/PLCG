#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)19479;
unsigned int var_13 = 3383599438U;
unsigned int var_14 = 1353208367U;
unsigned short var_17 = (unsigned short)54980;
int zero = 0;
unsigned short var_19 = (unsigned short)4677;
unsigned int var_20 = 810988673U;
unsigned short var_21 = (unsigned short)1960;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
