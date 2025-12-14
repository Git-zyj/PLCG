#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
int var_2 = -1473995782;
unsigned char var_5 = (unsigned char)195;
_Bool var_8 = (_Bool)1;
int var_9 = 1744423530;
int var_12 = -1947140177;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)243;
unsigned char var_18 = (unsigned char)105;
int zero = 0;
int var_19 = 1020014005;
unsigned char var_20 = (unsigned char)184;
unsigned char var_21 = (unsigned char)205;
void init() {
}

void checksum() {
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
