#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
int var_1 = 738684971;
unsigned int var_2 = 2625904663U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-106;
unsigned int var_5 = 3424402204U;
long long int var_7 = 4967392110062371087LL;
signed char var_8 = (signed char)-92;
unsigned int var_9 = 5356349U;
unsigned long long int var_11 = 2666440245268715229ULL;
int var_12 = -550892891;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
unsigned int var_14 = 821953628U;
long long int var_15 = -5087265140548023187LL;
long long int var_16 = -5741661581687210707LL;
unsigned long long int var_17 = 6631682379581526389ULL;
int var_18 = -1399864678;
int var_19 = 819640774;
int var_20 = -1661326171;
long long int var_21 = -8894587623252734552LL;
unsigned int var_22 = 1470243603U;
unsigned int var_23 = 3721116533U;
unsigned short var_24 = (unsigned short)35429;
long long int var_25 = -9028988835536517257LL;
unsigned int var_26 = 3436269041U;
int arr_0 [10] ;
signed char arr_1 [10] [10] ;
short arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
int arr_4 [10] ;
_Bool arr_7 [10] ;
long long int arr_8 [10] [10] [10] ;
signed char arr_17 [22] ;
unsigned int arr_20 [22] ;
unsigned char arr_18 [22] ;
int arr_24 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1583772758 : 494239187;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)12250;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 425138709U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -313250793;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4298839334475873825LL : -4206505504067258188LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 2926851580U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -795328477;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
