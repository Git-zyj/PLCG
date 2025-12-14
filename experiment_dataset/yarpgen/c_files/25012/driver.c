#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15465740207900466723ULL;
unsigned short var_3 = (unsigned short)30716;
unsigned short var_4 = (unsigned short)28096;
unsigned short var_5 = (unsigned short)36393;
unsigned long long int var_7 = 15987667926354190440ULL;
unsigned int var_8 = 64784068U;
unsigned int var_9 = 2969344978U;
int zero = 0;
signed char var_10 = (signed char)-51;
unsigned short var_11 = (unsigned short)8636;
unsigned long long int var_12 = 4760229606249193025ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
