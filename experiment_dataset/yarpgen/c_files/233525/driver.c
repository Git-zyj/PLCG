#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65185;
unsigned int var_4 = 3919376092U;
unsigned int var_7 = 2233774416U;
unsigned short var_9 = (unsigned short)33264;
int zero = 0;
unsigned int var_12 = 4025757260U;
unsigned short var_13 = (unsigned short)6632;
int var_14 = -850861589;
int var_15 = 133888127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
