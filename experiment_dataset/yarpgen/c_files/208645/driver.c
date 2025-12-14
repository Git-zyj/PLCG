#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2124976744U;
unsigned char var_10 = (unsigned char)247;
unsigned short var_13 = (unsigned short)3213;
unsigned int var_14 = 2055111112U;
unsigned int var_15 = 3049742830U;
int zero = 0;
unsigned short var_17 = (unsigned short)20845;
int var_18 = -317808155;
unsigned short var_19 = (unsigned short)62958;
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
