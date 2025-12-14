#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1310966820U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_5 = 1685448260602443058LL;
int var_6 = -600294002;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)-5915;
int var_11 = 913915630;
unsigned char var_12 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
