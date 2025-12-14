#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)3;
long long int var_3 = -537865007801824296LL;
signed char var_4 = (signed char)-122;
unsigned char var_9 = (unsigned char)63;
int zero = 0;
unsigned long long int var_14 = 3085853097773944245ULL;
unsigned long long int var_15 = 140487784530341789ULL;
unsigned long long int var_16 = 2674155400775797982ULL;
short var_17 = (short)30943;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
