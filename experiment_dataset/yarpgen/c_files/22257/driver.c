#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5145672912674190901ULL;
long long int var_1 = -6258097988920659295LL;
unsigned long long int var_2 = 3627346746344200901ULL;
signed char var_3 = (signed char)40;
unsigned int var_4 = 1976463540U;
unsigned int var_6 = 2679194247U;
long long int var_8 = -4876305877813218757LL;
unsigned int var_9 = 1919905996U;
unsigned char var_10 = (unsigned char)134;
unsigned short var_11 = (unsigned short)10938;
long long int var_12 = -2897776257351053432LL;
unsigned short var_13 = (unsigned short)31635;
int var_14 = -521082106;
long long int var_15 = -849280982390151096LL;
int zero = 0;
long long int var_16 = 8472774823168127961LL;
unsigned short var_17 = (unsigned short)33881;
signed char var_18 = (signed char)106;
long long int var_19 = 6567783848930244020LL;
long long int var_20 = 2029825918388991932LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
