#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -38004686;
unsigned char var_2 = (unsigned char)246;
int var_5 = -68745352;
long long int var_9 = 6517339233389915941LL;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)92;
int var_13 = 137696574;
int zero = 0;
long long int var_15 = 4728277022313734614LL;
unsigned char var_16 = (unsigned char)242;
int var_17 = -712453743;
int var_18 = -1186923021;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
