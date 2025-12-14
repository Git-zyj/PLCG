#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1324196518;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)232;
int zero = 0;
int var_14 = -1620233675;
int var_15 = -1709097686;
unsigned long long int var_16 = 15426506601050299929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
