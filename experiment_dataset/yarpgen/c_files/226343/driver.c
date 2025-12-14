#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 561088039;
long long int var_2 = -3685397890011317816LL;
signed char var_3 = (signed char)24;
int var_5 = 1068242403;
unsigned short var_6 = (unsigned short)62545;
unsigned long long int var_8 = 15140179890840145597ULL;
long long int var_11 = 1088015100629847772LL;
int zero = 0;
signed char var_13 = (signed char)37;
unsigned char var_14 = (unsigned char)54;
unsigned int var_15 = 502649859U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
