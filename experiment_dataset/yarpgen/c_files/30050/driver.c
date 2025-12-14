#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42477;
unsigned char var_4 = (unsigned char)69;
long long int var_6 = -1680516049726356193LL;
unsigned int var_10 = 2531678837U;
unsigned char var_12 = (unsigned char)185;
unsigned long long int var_18 = 10513278872361221700ULL;
int zero = 0;
int var_20 = -210906242;
signed char var_21 = (signed char)-70;
unsigned short var_22 = (unsigned short)19139;
signed char var_23 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
