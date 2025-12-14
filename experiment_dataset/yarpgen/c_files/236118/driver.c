#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30186;
unsigned int var_7 = 117926586U;
int var_8 = -1017678328;
int zero = 0;
signed char var_18 = (signed char)98;
unsigned char var_19 = (unsigned char)137;
int var_20 = -1075115232;
long long int var_21 = -8321320637146054455LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
