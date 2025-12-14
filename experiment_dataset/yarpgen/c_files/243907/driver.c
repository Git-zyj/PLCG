#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)220;
unsigned char var_3 = (unsigned char)49;
long long int var_5 = -2753701086783216758LL;
long long int var_6 = -1331501391947817657LL;
unsigned short var_13 = (unsigned short)61383;
unsigned char var_16 = (unsigned char)10;
int zero = 0;
unsigned char var_18 = (unsigned char)132;
long long int var_19 = 8844862732037003362LL;
unsigned char var_20 = (unsigned char)58;
unsigned char var_21 = (unsigned char)145;
void init() {
}

void checksum() {
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
