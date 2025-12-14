#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 37002802U;
signed char var_2 = (signed char)-99;
int var_5 = 659982721;
signed char var_6 = (signed char)2;
int var_9 = 1308061674;
int zero = 0;
int var_10 = 957479038;
unsigned char var_11 = (unsigned char)5;
long long int var_12 = -8510243445902053785LL;
signed char var_13 = (signed char)37;
signed char var_14 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
