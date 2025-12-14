#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3577981826021365855ULL;
signed char var_3 = (signed char)-32;
unsigned int var_9 = 3365890830U;
unsigned int var_10 = 3609131966U;
long long int var_11 = -280873091147629231LL;
int var_13 = 1965558888;
unsigned short var_15 = (unsigned short)62123;
int zero = 0;
short var_19 = (short)-20684;
long long int var_20 = -4836197437666485871LL;
int var_21 = 61370285;
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
