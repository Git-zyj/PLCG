#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)199;
long long int var_5 = -49125819016663476LL;
long long int var_6 = -3311114494196717005LL;
long long int var_8 = -5001786651064677845LL;
long long int var_9 = -8335600382934182117LL;
unsigned char var_11 = (unsigned char)239;
long long int var_12 = -4206445410351497660LL;
long long int var_16 = -1966467646878227843LL;
int zero = 0;
unsigned char var_17 = (unsigned char)100;
unsigned char var_18 = (unsigned char)80;
unsigned char var_19 = (unsigned char)83;
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
