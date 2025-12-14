#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 115506904;
unsigned short var_6 = (unsigned short)61365;
unsigned int var_11 = 2181297817U;
unsigned short var_15 = (unsigned short)58772;
unsigned short var_17 = (unsigned short)40666;
int var_18 = -1019037898;
unsigned int var_19 = 2680085058U;
int zero = 0;
unsigned int var_20 = 1566981668U;
int var_21 = -41716712;
unsigned short var_22 = (unsigned short)60152;
void init() {
}

void checksum() {
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
