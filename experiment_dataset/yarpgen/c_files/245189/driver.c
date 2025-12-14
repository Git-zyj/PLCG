#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned short var_3 = (unsigned short)24902;
int var_4 = -1495556470;
signed char var_5 = (signed char)70;
unsigned int var_6 = 1302059746U;
unsigned short var_8 = (unsigned short)18211;
unsigned char var_9 = (unsigned char)238;
signed char var_10 = (signed char)21;
unsigned long long int var_11 = 3230479126068267522ULL;
unsigned char var_12 = (unsigned char)173;
unsigned short var_14 = (unsigned short)32538;
long long int var_15 = 7087517340125971650LL;
int zero = 0;
unsigned short var_16 = (unsigned short)58910;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)206;
unsigned int var_19 = 2042705869U;
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
