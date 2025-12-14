#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5398496483578700569LL;
unsigned char var_2 = (unsigned char)138;
long long int var_5 = 8667912528238706817LL;
int var_6 = -73280641;
unsigned char var_8 = (unsigned char)109;
signed char var_12 = (signed char)67;
unsigned int var_13 = 3708684692U;
long long int var_14 = -4419355663665607866LL;
unsigned int var_16 = 2834528812U;
short var_18 = (short)-8718;
unsigned char var_19 = (unsigned char)199;
int zero = 0;
signed char var_20 = (signed char)20;
unsigned char var_21 = (unsigned char)148;
long long int var_22 = -3196121191774097400LL;
long long int var_23 = -4383258906385804753LL;
unsigned char var_24 = (unsigned char)129;
int var_25 = -539577797;
unsigned char var_26 = (unsigned char)129;
signed char var_27 = (signed char)119;
unsigned long long int var_28 = 13521041171580830073ULL;
int arr_7 [13] [13] [13] ;
unsigned char arr_12 [15] ;
signed char arr_13 [15] ;
signed char arr_16 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1007929504 : -638226511;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)0 : (signed char)96;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
