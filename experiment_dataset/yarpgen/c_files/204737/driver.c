#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 752281530U;
short var_2 = (short)-24198;
short var_3 = (short)10284;
long long int var_7 = 1437535905140057678LL;
unsigned int var_9 = 1399817452U;
unsigned char var_10 = (unsigned char)11;
long long int var_11 = -3603200766132319634LL;
signed char var_12 = (signed char)73;
unsigned int var_15 = 3286483032U;
int zero = 0;
signed char var_16 = (signed char)119;
int var_17 = -1769650770;
short var_18 = (short)448;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
