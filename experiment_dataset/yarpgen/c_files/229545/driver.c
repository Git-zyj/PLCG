#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 620760328;
long long int var_3 = 6827714636681252042LL;
unsigned char var_6 = (unsigned char)159;
long long int var_13 = -6805676642454804241LL;
unsigned int var_15 = 613629263U;
int zero = 0;
short var_19 = (short)-21835;
long long int var_20 = -4941054993902005038LL;
unsigned short var_21 = (unsigned short)22082;
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
