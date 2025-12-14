#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3142414925718621751ULL;
unsigned int var_11 = 2870975065U;
int var_18 = -476189100;
int zero = 0;
unsigned char var_20 = (unsigned char)253;
signed char var_21 = (signed char)-24;
unsigned int var_22 = 1997370287U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
