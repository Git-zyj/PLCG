#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 2906954089788235840LL;
unsigned long long int var_3 = 15897368016257691154ULL;
unsigned short var_5 = (unsigned short)14097;
unsigned char var_8 = (unsigned char)65;
int zero = 0;
short var_10 = (short)-13055;
unsigned char var_11 = (unsigned char)122;
long long int var_12 = 3091082850971331938LL;
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
