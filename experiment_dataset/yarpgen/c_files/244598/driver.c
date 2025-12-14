#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
signed char var_1 = (signed char)30;
signed char var_2 = (signed char)10;
unsigned int var_3 = 548538077U;
int var_6 = -359082490;
unsigned char var_10 = (unsigned char)164;
int var_11 = -711007854;
int var_12 = -971110143;
int var_14 = 720957997;
short var_15 = (short)5164;
int var_16 = -617735133;
unsigned long long int var_17 = 5018830550383727546ULL;
int zero = 0;
unsigned int var_18 = 3543519202U;
unsigned int var_19 = 2602975285U;
unsigned short var_20 = (unsigned short)12938;
signed char var_21 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
