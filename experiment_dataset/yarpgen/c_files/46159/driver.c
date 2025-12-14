#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16014027650399849395ULL;
unsigned char var_8 = (unsigned char)223;
int zero = 0;
unsigned int var_16 = 4143220907U;
unsigned short var_17 = (unsigned short)49839;
unsigned char var_18 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
