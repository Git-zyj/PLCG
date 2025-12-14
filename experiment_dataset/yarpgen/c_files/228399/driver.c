#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2846020531949502061LL;
unsigned int var_2 = 2225643535U;
unsigned long long int var_5 = 5101494027026386955ULL;
unsigned long long int var_8 = 9698087479479560839ULL;
int zero = 0;
signed char var_14 = (signed char)14;
unsigned short var_15 = (unsigned short)16662;
void init() {
}

void checksum() {
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
