#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1404360997;
unsigned char var_3 = (unsigned char)102;
long long int var_4 = 6427406958911403955LL;
unsigned long long int var_7 = 5557028975293251178ULL;
unsigned short var_8 = (unsigned short)43759;
signed char var_10 = (signed char)45;
unsigned char var_11 = (unsigned char)142;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1191433360U;
int var_14 = -1612445883;
short var_15 = (short)12986;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
