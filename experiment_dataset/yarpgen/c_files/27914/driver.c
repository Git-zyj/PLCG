#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -42656640;
unsigned short var_4 = (unsigned short)43845;
unsigned long long int var_5 = 7414635990049101494ULL;
int var_7 = 379932271;
int var_10 = -672207111;
int zero = 0;
unsigned short var_16 = (unsigned short)39765;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)226;
unsigned short var_19 = (unsigned short)33621;
unsigned short var_20 = (unsigned short)12193;
signed char var_21 = (signed char)-12;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
