#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned short var_1 = (unsigned short)49664;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-33;
int var_5 = 1240358247;
unsigned long long int var_6 = 18038863343726306930ULL;
int var_9 = 1192790859;
int var_10 = 208739580;
long long int var_11 = -5539265351245102994LL;
short var_12 = (short)-11211;
signed char var_13 = (signed char)-32;
int zero = 0;
long long int var_14 = -2397771480312205666LL;
short var_15 = (short)10000;
_Bool var_16 = (_Bool)1;
int var_17 = -1496591938;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
