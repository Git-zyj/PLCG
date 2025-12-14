#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7392175265093156513ULL;
short var_5 = (short)20155;
long long int var_7 = -1831563633281028380LL;
long long int var_8 = 4081610348252881084LL;
int var_9 = 1806233648;
unsigned short var_10 = (unsigned short)58681;
int zero = 0;
unsigned short var_12 = (unsigned short)6035;
unsigned int var_13 = 212037813U;
int var_14 = -1992965405;
unsigned int var_15 = 970714866U;
unsigned char var_16 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
