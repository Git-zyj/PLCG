#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8558;
long long int var_2 = -7060001862148515025LL;
unsigned long long int var_5 = 6615649808627469223ULL;
unsigned short var_10 = (unsigned short)9909;
unsigned long long int var_11 = 11024179259670112684ULL;
int zero = 0;
int var_12 = -623645797;
signed char var_13 = (signed char)33;
void init() {
}

void checksum() {
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
