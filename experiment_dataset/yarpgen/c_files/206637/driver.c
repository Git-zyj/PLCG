#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = -25122507;
unsigned char var_7 = (unsigned char)120;
int zero = 0;
unsigned short var_10 = (unsigned short)40894;
unsigned long long int var_11 = 12468780681804905817ULL;
unsigned long long int var_12 = 14196305826753611698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
