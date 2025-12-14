#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3493906828U;
unsigned char var_2 = (unsigned char)234;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)197;
long long int var_8 = 5714932379840146297LL;
unsigned int var_9 = 2288777000U;
int var_10 = 1604435047;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)115;
unsigned short var_14 = (unsigned short)49706;
short var_15 = (short)11489;
signed char var_16 = (signed char)39;
unsigned int var_17 = 3260622588U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
