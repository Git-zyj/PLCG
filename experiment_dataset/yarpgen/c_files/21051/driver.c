#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
unsigned char var_3 = (unsigned char)48;
unsigned short var_7 = (unsigned short)61558;
unsigned char var_9 = (unsigned char)85;
unsigned short var_10 = (unsigned short)41666;
unsigned short var_11 = (unsigned short)38537;
int zero = 0;
unsigned short var_12 = (unsigned short)59964;
long long int var_13 = -3476808145168708988LL;
long long int var_14 = -6304959443010437538LL;
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
