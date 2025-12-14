#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3953759797U;
short var_2 = (short)-29784;
unsigned short var_3 = (unsigned short)17951;
unsigned char var_6 = (unsigned char)179;
_Bool var_8 = (_Bool)1;
short var_9 = (short)5966;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)247;
unsigned short var_21 = (unsigned short)50191;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
