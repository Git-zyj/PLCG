#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4913744207195389220ULL;
signed char var_2 = (signed char)-122;
unsigned long long int var_5 = 6999709619460839885ULL;
signed char var_6 = (signed char)-48;
unsigned long long int var_8 = 17266619396105102174ULL;
int zero = 0;
signed char var_10 = (signed char)63;
unsigned long long int var_11 = 13995073007686848191ULL;
signed char var_12 = (signed char)117;
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
