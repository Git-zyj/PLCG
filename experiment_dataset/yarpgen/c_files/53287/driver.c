#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25404;
unsigned char var_2 = (unsigned char)197;
unsigned char var_4 = (unsigned char)245;
short var_5 = (short)2951;
short var_6 = (short)18890;
unsigned long long int var_8 = 14015941242934585186ULL;
unsigned char var_9 = (unsigned char)122;
int zero = 0;
unsigned long long int var_12 = 1814400575336479954ULL;
unsigned long long int var_13 = 3506234243939435213ULL;
unsigned int var_14 = 1324016678U;
unsigned long long int var_15 = 11159988935001929365ULL;
void init() {
}

void checksum() {
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
