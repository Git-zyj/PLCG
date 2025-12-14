#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 248480123452352670LL;
unsigned short var_5 = (unsigned short)33591;
short var_7 = (short)29795;
unsigned char var_12 = (unsigned char)84;
int zero = 0;
int var_13 = -1479582766;
long long int var_14 = 1659380365784298280LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
