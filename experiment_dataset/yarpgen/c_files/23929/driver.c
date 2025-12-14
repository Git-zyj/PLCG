#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6659;
signed char var_2 = (signed char)-113;
signed char var_3 = (signed char)-5;
unsigned int var_9 = 2525075354U;
long long int var_10 = -8651301892036583959LL;
int zero = 0;
signed char var_12 = (signed char)-36;
long long int var_13 = 38301148663906671LL;
void init() {
}

void checksum() {
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
