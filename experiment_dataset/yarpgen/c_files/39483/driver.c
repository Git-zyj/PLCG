#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1602866434;
unsigned char var_1 = (unsigned char)7;
_Bool var_2 = (_Bool)0;
long long int var_5 = 4712854995760404511LL;
unsigned char var_6 = (unsigned char)93;
int zero = 0;
int var_10 = -1646369483;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-8132;
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
