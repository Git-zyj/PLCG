#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 137736038U;
unsigned char var_2 = (unsigned char)80;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)13140;
unsigned long long int var_7 = 13078044941304231091ULL;
short var_8 = (short)-9421;
signed char var_10 = (signed char)108;
unsigned char var_12 = (unsigned char)243;
long long int var_14 = 7444530300043447143LL;
int zero = 0;
unsigned long long int var_15 = 11387053240455363281ULL;
unsigned long long int var_16 = 14932354307556594089ULL;
unsigned int var_17 = 2741543326U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
