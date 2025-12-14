#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
short var_3 = (short)-11904;
unsigned short var_8 = (unsigned short)58789;
short var_9 = (short)30442;
unsigned int var_11 = 1680296100U;
unsigned char var_12 = (unsigned char)231;
int zero = 0;
long long int var_14 = -8195426451863385878LL;
signed char var_15 = (signed char)-103;
signed char var_16 = (signed char)1;
int var_17 = 1998438923;
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
