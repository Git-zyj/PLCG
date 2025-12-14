#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned short var_3 = (unsigned short)38675;
int var_4 = 61694273;
int var_14 = 2039353358;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
unsigned char var_20 = (unsigned char)84;
unsigned short var_21 = (unsigned short)47224;
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
