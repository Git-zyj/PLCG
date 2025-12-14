#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 960758228;
unsigned int var_11 = 2311580448U;
unsigned int var_14 = 802400897U;
unsigned char var_18 = (unsigned char)20;
int zero = 0;
unsigned int var_19 = 3930746165U;
unsigned short var_20 = (unsigned short)32564;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
