#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 528155584U;
int var_1 = 1746933114;
signed char var_3 = (signed char)-6;
unsigned short var_6 = (unsigned short)24957;
unsigned int var_7 = 789102608U;
unsigned short var_8 = (unsigned short)23556;
int zero = 0;
unsigned char var_10 = (unsigned char)68;
unsigned int var_11 = 1788365407U;
signed char var_12 = (signed char)-65;
unsigned int var_13 = 3980774715U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
