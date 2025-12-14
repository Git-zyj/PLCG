#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3382576851431059852LL;
unsigned char var_1 = (unsigned char)43;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3598135642U;
int var_6 = -992260108;
unsigned short var_7 = (unsigned short)30478;
signed char var_8 = (signed char)2;
short var_9 = (short)-5729;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-12825;
unsigned long long int var_12 = 1377560294992763760ULL;
unsigned char var_13 = (unsigned char)55;
int var_14 = 1989763987;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
