#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)230;
unsigned char var_3 = (unsigned char)197;
unsigned char var_4 = (unsigned char)53;
unsigned char var_5 = (unsigned char)205;
signed char var_6 = (signed char)-79;
int var_7 = 1031559918;
unsigned char var_9 = (unsigned char)96;
short var_10 = (short)-20438;
unsigned short var_11 = (unsigned short)26866;
signed char var_12 = (signed char)-3;
unsigned char var_13 = (unsigned char)72;
long long int var_15 = 7917246996122106599LL;
short var_16 = (short)20415;
int zero = 0;
unsigned char var_17 = (unsigned char)60;
unsigned int var_18 = 3100784550U;
long long int var_19 = 8950642242584256791LL;
unsigned char var_20 = (unsigned char)94;
long long int var_21 = -631395400212276274LL;
long long int var_22 = 5234199396564532563LL;
unsigned char var_23 = (unsigned char)109;
unsigned int var_24 = 3850829021U;
unsigned char arr_2 [21] ;
unsigned int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 586660866U : 1115038450U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
