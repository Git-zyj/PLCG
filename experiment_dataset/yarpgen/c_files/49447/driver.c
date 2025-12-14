#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned long long int var_2 = 2130167904138435405ULL;
unsigned char var_10 = (unsigned char)165;
unsigned short var_12 = (unsigned short)3125;
int zero = 0;
long long int var_15 = 5170120734605891333LL;
signed char var_16 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
