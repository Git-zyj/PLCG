#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27490;
unsigned short var_3 = (unsigned short)37115;
unsigned short var_4 = (unsigned short)18956;
unsigned short var_5 = (unsigned short)11085;
unsigned short var_6 = (unsigned short)54597;
unsigned short var_7 = (unsigned short)20421;
unsigned short var_8 = (unsigned short)7905;
unsigned short var_9 = (unsigned short)62602;
int zero = 0;
unsigned short var_10 = (unsigned short)26749;
unsigned short var_11 = (unsigned short)11041;
unsigned short var_12 = (unsigned short)63120;
unsigned short var_13 = (unsigned short)11616;
unsigned short var_14 = (unsigned short)43938;
unsigned short var_15 = (unsigned short)61552;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
