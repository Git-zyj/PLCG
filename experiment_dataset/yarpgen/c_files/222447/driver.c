#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13964;
int var_2 = 2021276213;
unsigned short var_3 = (unsigned short)40189;
short var_5 = (short)-2648;
unsigned long long int var_8 = 3222873488516256214ULL;
unsigned char var_9 = (unsigned char)218;
int var_10 = -1305545014;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
unsigned char var_17 = (unsigned char)242;
short var_18 = (short)-27012;
int var_19 = -1716740367;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
