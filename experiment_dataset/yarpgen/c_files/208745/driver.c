#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
signed char var_1 = (signed char)46;
unsigned char var_2 = (unsigned char)92;
long long int var_3 = -478286457418989152LL;
long long int var_4 = -3760119520542540226LL;
unsigned short var_5 = (unsigned short)51391;
unsigned char var_6 = (unsigned char)100;
long long int var_7 = 2576079564511211243LL;
long long int var_10 = 5322121083157600970LL;
unsigned short var_12 = (unsigned short)6409;
signed char var_14 = (signed char)8;
int zero = 0;
signed char var_17 = (signed char)-11;
unsigned char var_18 = (unsigned char)116;
void init() {
}

void checksum() {
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
