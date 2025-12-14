#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24645;
int var_1 = 487655092;
int var_5 = 723345528;
int var_6 = 1957466860;
unsigned int var_8 = 1111793279U;
signed char var_10 = (signed char)122;
int var_11 = -381668575;
int zero = 0;
unsigned int var_12 = 4255067434U;
unsigned int var_13 = 3205443969U;
signed char var_14 = (signed char)-25;
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
