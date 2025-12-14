#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)5640;
unsigned char var_7 = (unsigned char)146;
short var_8 = (short)6058;
_Bool var_9 = (_Bool)0;
short var_10 = (short)19358;
int var_11 = 1403807888;
unsigned int var_13 = 1103651639U;
unsigned int var_17 = 1510223559U;
unsigned char var_18 = (unsigned char)99;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
unsigned int var_20 = 2446072433U;
unsigned char var_21 = (unsigned char)255;
signed char var_22 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
