#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59887;
short var_3 = (short)7350;
long long int var_4 = 5462149615346271763LL;
unsigned short var_5 = (unsigned short)57047;
int var_7 = 240858194;
int var_10 = -1021005262;
int zero = 0;
long long int var_11 = 3811005193083489665LL;
short var_12 = (short)31813;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
