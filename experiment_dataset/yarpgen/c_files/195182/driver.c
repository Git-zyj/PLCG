#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)119;
unsigned char var_4 = (unsigned char)200;
unsigned short var_6 = (unsigned short)15295;
unsigned int var_9 = 2140887932U;
int var_13 = 458257545;
unsigned long long int var_14 = 4636641162969156308ULL;
int zero = 0;
signed char var_16 = (signed char)-38;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)52;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
