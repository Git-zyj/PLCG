#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)23;
int var_8 = 1558901163;
int var_11 = 841822623;
int zero = 0;
long long int var_14 = -6164075128777944630LL;
long long int var_15 = -4181458032907837384LL;
unsigned short var_16 = (unsigned short)17199;
signed char var_17 = (signed char)47;
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
