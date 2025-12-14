#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3901346289U;
unsigned int var_4 = 896792070U;
int zero = 0;
signed char var_10 = (signed char)50;
unsigned int var_11 = 2629129131U;
unsigned short var_12 = (unsigned short)47089;
unsigned short var_13 = (unsigned short)22085;
unsigned short var_14 = (unsigned short)6277;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
