#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)240;
unsigned int var_2 = 3313187231U;
unsigned short var_3 = (unsigned short)2858;
unsigned long long int var_4 = 10959185452175506402ULL;
int var_6 = -1964108634;
int var_10 = 1800979450;
int zero = 0;
long long int var_11 = 5573006336833617790LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-17016;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
