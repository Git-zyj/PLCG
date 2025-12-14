#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
short var_3 = (short)-23743;
unsigned char var_5 = (unsigned char)128;
_Bool var_6 = (_Bool)0;
long long int var_9 = -6488502271282270965LL;
int var_10 = 1014075920;
unsigned int var_13 = 564334575U;
short var_14 = (short)-20140;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8875408464081560747ULL;
void init() {
}

void checksum() {
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
