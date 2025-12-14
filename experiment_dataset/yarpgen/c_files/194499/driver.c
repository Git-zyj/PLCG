#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-6162;
short var_7 = (short)13673;
unsigned long long int var_10 = 3887247575193475500ULL;
int zero = 0;
long long int var_11 = -614066542569684750LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)215;
unsigned long long int var_14 = 16525353572727987222ULL;
unsigned long long int var_15 = 6409803207959633137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
