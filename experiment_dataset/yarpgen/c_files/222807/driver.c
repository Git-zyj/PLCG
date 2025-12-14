#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7412086781434893753ULL;
unsigned short var_7 = (unsigned short)35257;
unsigned long long int var_11 = 18175239337035525815ULL;
unsigned short var_13 = (unsigned short)17507;
unsigned short var_15 = (unsigned short)31475;
unsigned short var_16 = (unsigned short)43115;
int zero = 0;
unsigned short var_17 = (unsigned short)31845;
unsigned short var_18 = (unsigned short)36577;
unsigned short var_19 = (unsigned short)41153;
unsigned short var_20 = (unsigned short)48806;
unsigned short var_21 = (unsigned short)1166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
