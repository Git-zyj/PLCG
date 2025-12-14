#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 32372576U;
unsigned long long int var_2 = 12674305963897612783ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2895952356U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)50445;
long long int var_12 = -4320379507885635898LL;
unsigned short var_14 = (unsigned short)34187;
int zero = 0;
unsigned long long int var_17 = 5328105696251311796ULL;
unsigned char var_18 = (unsigned char)237;
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
