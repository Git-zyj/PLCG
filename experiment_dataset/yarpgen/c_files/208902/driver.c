#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)13770;
unsigned long long int var_11 = 9132806032148901896ULL;
int var_13 = -1903647084;
int zero = 0;
unsigned char var_14 = (unsigned char)8;
unsigned int var_15 = 4056038824U;
void init() {
}

void checksum() {
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
