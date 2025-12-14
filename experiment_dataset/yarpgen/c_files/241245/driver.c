#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42066;
unsigned char var_1 = (unsigned char)64;
short var_3 = (short)15698;
unsigned short var_9 = (unsigned short)43843;
long long int var_11 = 711654977293707803LL;
int zero = 0;
int var_12 = -2136489488;
unsigned long long int var_13 = 4715490256553648480ULL;
unsigned char var_14 = (unsigned char)62;
unsigned char var_15 = (unsigned char)109;
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
