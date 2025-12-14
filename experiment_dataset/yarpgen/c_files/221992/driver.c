#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1835790892;
unsigned char var_11 = (unsigned char)188;
int var_13 = 2082227439;
int zero = 0;
unsigned char var_16 = (unsigned char)44;
short var_17 = (short)24236;
int var_18 = 375590263;
long long int var_19 = -1561608592657086078LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
