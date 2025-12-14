#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2806347936U;
long long int var_5 = -1345713202884178562LL;
unsigned short var_6 = (unsigned short)23171;
int var_9 = 1266741714;
unsigned int var_13 = 3713405503U;
unsigned int var_15 = 1314178427U;
unsigned int var_16 = 3325695369U;
int zero = 0;
unsigned char var_17 = (unsigned char)138;
unsigned char var_18 = (unsigned char)2;
int var_19 = -834286345;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
