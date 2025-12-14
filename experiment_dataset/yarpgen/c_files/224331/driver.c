#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3696373228581161421LL;
long long int var_4 = 2064403672907672220LL;
unsigned int var_6 = 726033129U;
signed char var_14 = (signed char)75;
long long int var_15 = 9219390159795924096LL;
unsigned short var_16 = (unsigned short)40097;
int zero = 0;
short var_17 = (short)-7177;
unsigned short var_18 = (unsigned short)8150;
signed char var_19 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
