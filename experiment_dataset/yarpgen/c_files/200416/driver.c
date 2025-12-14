#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6951637973736625011LL;
unsigned char var_2 = (unsigned char)236;
long long int var_4 = 3044930968780030261LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 8642480611716763118ULL;
long long int var_8 = 5439308943948835645LL;
signed char var_9 = (signed char)-81;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3502221646271230739ULL;
unsigned long long int var_12 = 15416997149809788719ULL;
signed char var_13 = (signed char)-29;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-8;
unsigned long long int var_16 = 16791593541135138541ULL;
unsigned char var_17 = (unsigned char)163;
signed char var_18 = (signed char)65;
unsigned long long int var_19 = 16075117816021144716ULL;
signed char var_20 = (signed char)57;
int var_21 = 1027327014;
unsigned long long int var_22 = 12680966486298011310ULL;
unsigned short arr_0 [15] ;
unsigned char arr_3 [11] [11] ;
_Bool arr_6 [22] ;
_Bool arr_7 [22] ;
unsigned long long int arr_2 [15] ;
long long int arr_8 [22] ;
_Bool arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)20748;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1329952717217748337ULL : 3005061076017228114ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 4654749570397265314LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
