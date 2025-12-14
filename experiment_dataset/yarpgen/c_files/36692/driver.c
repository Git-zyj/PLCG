#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3870088970995800107ULL;
unsigned char var_3 = (unsigned char)169;
unsigned long long int var_5 = 3330791938924014123ULL;
long long int var_6 = -4007161455425667918LL;
long long int var_7 = 2641624025994811248LL;
short var_10 = (short)-1984;
unsigned short var_11 = (unsigned short)53588;
int zero = 0;
short var_12 = (short)17767;
long long int var_13 = 7929976601974104832LL;
unsigned int var_14 = 1892291869U;
long long int var_15 = -348910879826412078LL;
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
