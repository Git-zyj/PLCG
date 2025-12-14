#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
signed char var_3 = (signed char)-47;
unsigned char var_5 = (unsigned char)232;
signed char var_6 = (signed char)-34;
unsigned char var_9 = (unsigned char)209;
unsigned short var_11 = (unsigned short)21490;
signed char var_12 = (signed char)-90;
unsigned char var_15 = (unsigned char)116;
unsigned int var_16 = 907520397U;
int zero = 0;
unsigned int var_17 = 345424404U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)11943;
unsigned short var_20 = (unsigned short)27350;
unsigned short var_21 = (unsigned short)52144;
unsigned long long int var_22 = 14883231941850502096ULL;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54958 : (unsigned short)64697;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
