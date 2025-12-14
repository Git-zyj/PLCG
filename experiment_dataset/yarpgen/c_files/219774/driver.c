#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)241;
unsigned char var_7 = (unsigned char)111;
unsigned char var_8 = (unsigned char)109;
long long int var_9 = 829611391334143869LL;
unsigned char var_10 = (unsigned char)74;
unsigned char var_15 = (unsigned char)158;
int zero = 0;
int var_16 = -1533740932;
int var_17 = -333249140;
int var_18 = 955224696;
short var_19 = (short)12932;
long long int var_20 = -4635506446303403420LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
