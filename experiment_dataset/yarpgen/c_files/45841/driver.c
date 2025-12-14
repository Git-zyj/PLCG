#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 847116593203143748ULL;
signed char var_10 = (signed char)-32;
unsigned short var_14 = (unsigned short)2155;
int zero = 0;
unsigned int var_18 = 57761882U;
unsigned short var_19 = (unsigned short)19768;
int var_20 = -466925656;
int var_21 = 1717832277;
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
