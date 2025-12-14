#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)92;
unsigned long long int var_7 = 5068637053302480488ULL;
unsigned char var_8 = (unsigned char)202;
int zero = 0;
unsigned int var_11 = 3709752046U;
unsigned long long int var_12 = 6304220084555498943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
