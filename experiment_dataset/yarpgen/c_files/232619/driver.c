#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 709468942;
long long int var_4 = 4463659953571073475LL;
unsigned char var_5 = (unsigned char)145;
signed char var_6 = (signed char)34;
short var_7 = (short)-3668;
unsigned char var_8 = (unsigned char)85;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)84;
unsigned char var_13 = (unsigned char)157;
unsigned int var_14 = 2661327495U;
int var_15 = 1616540075;
int var_16 = -185229388;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
