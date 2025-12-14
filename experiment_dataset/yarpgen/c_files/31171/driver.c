#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
signed char var_2 = (signed char)-76;
unsigned int var_3 = 3460984137U;
long long int var_5 = -7241878630173931505LL;
unsigned long long int var_9 = 13613518741401115936ULL;
unsigned char var_10 = (unsigned char)6;
unsigned long long int var_11 = 8352785248652568906ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)51257;
unsigned char var_13 = (unsigned char)223;
unsigned char var_14 = (unsigned char)14;
void init() {
}

void checksum() {
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
