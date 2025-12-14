#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_14 = (unsigned char)125;
long long int var_17 = 1452810601654731183LL;
int zero = 0;
signed char var_18 = (signed char)68;
int var_19 = -1633280063;
long long int var_20 = 5146096030987186841LL;
signed char var_21 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
