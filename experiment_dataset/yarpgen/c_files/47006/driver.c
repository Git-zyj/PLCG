#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)28298;
unsigned short var_4 = (unsigned short)57790;
short var_7 = (short)-272;
unsigned short var_9 = (unsigned short)51613;
unsigned char var_10 = (unsigned char)253;
unsigned int var_11 = 3794216766U;
int zero = 0;
long long int var_12 = 6622907552008925825LL;
short var_13 = (short)-24068;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
