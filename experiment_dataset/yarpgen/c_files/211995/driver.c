#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35064;
unsigned short var_3 = (unsigned short)16115;
unsigned short var_10 = (unsigned short)32564;
unsigned short var_16 = (unsigned short)14650;
unsigned short var_17 = (unsigned short)18751;
int zero = 0;
unsigned short var_19 = (unsigned short)4285;
unsigned short var_20 = (unsigned short)54427;
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
