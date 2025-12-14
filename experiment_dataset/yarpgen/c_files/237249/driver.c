#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1941514311;
int var_6 = 997586744;
unsigned short var_10 = (unsigned short)9785;
int zero = 0;
unsigned short var_19 = (unsigned short)11472;
long long int var_20 = -565335102602791827LL;
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
