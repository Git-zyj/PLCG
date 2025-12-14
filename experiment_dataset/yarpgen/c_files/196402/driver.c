#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13704850320677092481ULL;
int var_7 = 2047564800;
int var_13 = -771657466;
long long int var_16 = 333357496651436464LL;
int zero = 0;
unsigned short var_17 = (unsigned short)55142;
unsigned char var_18 = (unsigned char)251;
void init() {
}

void checksum() {
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
