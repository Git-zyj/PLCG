#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29330;
unsigned short var_2 = (unsigned short)46479;
int var_3 = -693119252;
signed char var_4 = (signed char)-5;
signed char var_5 = (signed char)-93;
int var_6 = 575089080;
unsigned int var_8 = 2265162753U;
unsigned short var_9 = (unsigned short)33233;
int zero = 0;
unsigned int var_11 = 2860924814U;
unsigned int var_12 = 1158623963U;
unsigned long long int var_13 = 14869693535545215425ULL;
int var_14 = -671835324;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
