#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)24;
unsigned char var_9 = (unsigned char)40;
_Bool var_10 = (_Bool)0;
int var_11 = -254547859;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16041593016972772835ULL;
short var_16 = (short)-31301;
int zero = 0;
unsigned char var_17 = (unsigned char)72;
unsigned char var_18 = (unsigned char)48;
int var_19 = 1939803246;
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
