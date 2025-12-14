#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3138587598U;
unsigned int var_2 = 3761503671U;
int var_3 = -1387902235;
long long int var_4 = -2173348344055998693LL;
unsigned long long int var_5 = 17541307653043058777ULL;
short var_6 = (short)-7130;
unsigned int var_7 = 1298929999U;
unsigned int var_8 = 3275654222U;
short var_10 = (short)-20343;
unsigned long long int var_11 = 534981938502209154ULL;
long long int var_12 = 8046418379120469121LL;
int zero = 0;
long long int var_13 = -6045447842667658194LL;
int var_14 = 661049275;
unsigned short var_15 = (unsigned short)24739;
unsigned char var_16 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
