#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5218292437001443458LL;
unsigned char var_3 = (unsigned char)64;
unsigned int var_4 = 1494123308U;
signed char var_7 = (signed char)123;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-62;
int zero = 0;
long long int var_10 = 2617585598059087030LL;
long long int var_11 = 2174326988881708107LL;
unsigned int var_12 = 3044048939U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
