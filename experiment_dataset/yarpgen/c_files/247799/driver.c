#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 4686034844788645203LL;
unsigned char var_4 = (unsigned char)52;
unsigned int var_5 = 3883667579U;
short var_8 = (short)-12603;
unsigned int var_11 = 2361583894U;
int zero = 0;
unsigned int var_16 = 1476406528U;
long long int var_17 = -8045161046803139740LL;
short var_18 = (short)-20065;
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
