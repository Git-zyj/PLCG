#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1823619362U;
int var_3 = -702271669;
unsigned char var_4 = (unsigned char)218;
_Bool var_6 = (_Bool)1;
short var_7 = (short)13404;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 18244201563701132493ULL;
signed char var_15 = (signed char)-1;
int zero = 0;
long long int var_16 = -3460518894620765506LL;
unsigned short var_17 = (unsigned short)38441;
unsigned short var_18 = (unsigned short)10157;
unsigned char var_19 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
