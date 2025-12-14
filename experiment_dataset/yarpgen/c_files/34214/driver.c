#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3328;
unsigned int var_2 = 4059411656U;
unsigned int var_4 = 2674137133U;
signed char var_5 = (signed char)-111;
unsigned char var_7 = (unsigned char)206;
unsigned int var_8 = 2542778036U;
signed char var_9 = (signed char)62;
unsigned char var_10 = (unsigned char)49;
short var_13 = (short)7065;
signed char var_14 = (signed char)-90;
short var_15 = (short)24689;
int zero = 0;
unsigned short var_16 = (unsigned short)10999;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3526212068U;
unsigned long long int var_19 = 4643508437768562884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
