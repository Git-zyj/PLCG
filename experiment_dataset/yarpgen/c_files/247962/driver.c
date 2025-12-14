#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 719555091;
unsigned long long int var_6 = 3607118515320955242ULL;
short var_9 = (short)7105;
short var_12 = (short)23251;
unsigned short var_15 = (unsigned short)1111;
unsigned char var_18 = (unsigned char)99;
int zero = 0;
unsigned int var_19 = 1385477745U;
long long int var_20 = 6533447118466889010LL;
unsigned int var_21 = 1739775916U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
