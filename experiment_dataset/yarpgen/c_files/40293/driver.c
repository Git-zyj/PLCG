#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16059158162195752725ULL;
unsigned char var_3 = (unsigned char)36;
unsigned char var_7 = (unsigned char)29;
unsigned char var_10 = (unsigned char)43;
short var_16 = (short)9657;
int zero = 0;
unsigned short var_17 = (unsigned short)54579;
short var_18 = (short)-6939;
unsigned long long int var_19 = 583606502984583490ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
