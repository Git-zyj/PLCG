#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64877;
unsigned short var_5 = (unsigned short)64200;
unsigned short var_6 = (unsigned short)40225;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-16795;
long long int var_12 = 4127024480724007479LL;
int zero = 0;
unsigned short var_13 = (unsigned short)35138;
unsigned char var_14 = (unsigned char)225;
short var_15 = (short)-8828;
_Bool var_16 = (_Bool)0;
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
