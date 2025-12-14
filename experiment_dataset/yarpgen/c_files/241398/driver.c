#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4678933204757454597ULL;
unsigned char var_1 = (unsigned char)84;
unsigned int var_2 = 1081379905U;
int var_3 = 200373201;
signed char var_4 = (signed char)-105;
unsigned char var_6 = (unsigned char)171;
int var_9 = 388742254;
signed char var_10 = (signed char)-2;
unsigned long long int var_11 = 8477776688559367332ULL;
short var_12 = (short)15164;
unsigned char var_14 = (unsigned char)165;
int zero = 0;
int var_15 = 635154456;
unsigned long long int var_16 = 15879924166710431641ULL;
int var_17 = 413269210;
unsigned short var_18 = (unsigned short)10830;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
