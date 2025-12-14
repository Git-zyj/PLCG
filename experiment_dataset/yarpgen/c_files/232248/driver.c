#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
int var_1 = -1472220770;
unsigned int var_3 = 1184197174U;
unsigned short var_5 = (unsigned short)654;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-32416;
int var_9 = -1238817739;
unsigned short var_10 = (unsigned short)30492;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)29900;
int var_14 = -721420611;
unsigned char var_15 = (unsigned char)181;
unsigned long long int var_16 = 9073381481820575220ULL;
void init() {
}

void checksum() {
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
