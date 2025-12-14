#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned int var_2 = 3052053457U;
unsigned short var_6 = (unsigned short)42447;
long long int var_7 = -5331990962694817155LL;
unsigned long long int var_8 = 3471399651352150036ULL;
unsigned char var_10 = (unsigned char)28;
unsigned long long int var_11 = 9861647610947580283ULL;
int zero = 0;
unsigned int var_13 = 1924007491U;
unsigned long long int var_14 = 12601007874097773866ULL;
signed char var_15 = (signed char)-14;
unsigned char var_16 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
