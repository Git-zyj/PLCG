#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39473;
int var_1 = 935741324;
unsigned long long int var_3 = 6550663337415688861ULL;
int var_5 = -1188796744;
unsigned long long int var_7 = 6353037428865976072ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-26;
unsigned int var_13 = 4262957308U;
unsigned short var_14 = (unsigned short)29906;
unsigned long long int var_17 = 7124084560910745414ULL;
int zero = 0;
int var_19 = -1965071299;
unsigned char var_20 = (unsigned char)229;
int var_21 = 395134058;
int var_22 = 229177205;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
