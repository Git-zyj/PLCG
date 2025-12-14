#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1068707575;
long long int var_7 = -8366610772326973986LL;
unsigned int var_8 = 59409519U;
unsigned int var_14 = 2125880580U;
int var_15 = 1190203715;
int var_18 = 411022863;
int zero = 0;
int var_19 = -992762268;
int var_20 = 400998622;
unsigned char var_21 = (unsigned char)86;
unsigned long long int var_22 = 11312943346542227808ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
