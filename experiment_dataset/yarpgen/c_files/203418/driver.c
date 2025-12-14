#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1392390472;
unsigned char var_5 = (unsigned char)29;
int var_6 = 1449474614;
unsigned char var_7 = (unsigned char)140;
unsigned char var_8 = (unsigned char)99;
unsigned char var_9 = (unsigned char)27;
unsigned char var_10 = (unsigned char)251;
int var_11 = 395114506;
unsigned char var_15 = (unsigned char)213;
int var_16 = -1034422479;
int zero = 0;
int var_17 = -1409642874;
int var_18 = -720623585;
_Bool var_19 = (_Bool)1;
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
