#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2380710882749863495ULL;
short var_1 = (short)12111;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)12869;
unsigned short var_11 = (unsigned short)22050;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
