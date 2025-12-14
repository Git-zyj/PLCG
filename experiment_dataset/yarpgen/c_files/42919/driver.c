#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2012695249648065456LL;
unsigned int var_5 = 519949160U;
signed char var_8 = (signed char)-100;
int var_9 = 720034173;
signed char var_13 = (signed char)85;
int var_15 = 498363148;
int zero = 0;
unsigned short var_16 = (unsigned short)33520;
unsigned int var_17 = 3052567029U;
unsigned int var_18 = 3438376914U;
short var_19 = (short)18173;
unsigned int var_20 = 276140410U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
