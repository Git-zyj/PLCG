#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1416632939;
unsigned int var_1 = 862389457U;
unsigned long long int var_2 = 2885057690344457560ULL;
unsigned short var_4 = (unsigned short)64299;
int var_10 = 1317557368;
int var_11 = 1180544130;
signed char var_14 = (signed char)111;
unsigned char var_16 = (unsigned char)16;
long long int var_18 = -2471198420628087742LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-15590;
void init() {
}

void checksum() {
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
