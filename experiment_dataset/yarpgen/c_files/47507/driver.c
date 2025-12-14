#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 457675609U;
unsigned short var_1 = (unsigned short)61899;
unsigned int var_2 = 442700499U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-14353;
_Bool var_5 = (_Bool)1;
int var_6 = 548569830;
unsigned char var_7 = (unsigned char)89;
unsigned long long int var_8 = 18022577706970595249ULL;
signed char var_9 = (signed char)-75;
unsigned long long int var_10 = 18148138269338873936ULL;
signed char var_11 = (signed char)101;
int zero = 0;
int var_12 = -1791487480;
unsigned char var_13 = (unsigned char)28;
unsigned int var_14 = 2292010111U;
int var_15 = -726995556;
unsigned long long int var_16 = 7078288867502235537ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)41134;
unsigned long long int var_19 = 10318297498028189265ULL;
unsigned int var_20 = 2980592042U;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)6244;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
