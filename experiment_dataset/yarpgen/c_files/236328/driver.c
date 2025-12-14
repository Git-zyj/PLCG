#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -906521478;
unsigned char var_3 = (unsigned char)246;
int var_4 = 1958221101;
unsigned char var_5 = (unsigned char)247;
int var_8 = -1219238176;
unsigned char var_9 = (unsigned char)243;
unsigned int var_10 = 3246919206U;
unsigned char var_11 = (unsigned char)178;
int var_12 = -108273497;
int var_14 = -1652515212;
unsigned int var_16 = 2930353525U;
int zero = 0;
int var_17 = -826634940;
unsigned char var_18 = (unsigned char)121;
unsigned char var_19 = (unsigned char)23;
unsigned char var_20 = (unsigned char)24;
int var_21 = 503694906;
unsigned char var_22 = (unsigned char)164;
int var_23 = -327781027;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
