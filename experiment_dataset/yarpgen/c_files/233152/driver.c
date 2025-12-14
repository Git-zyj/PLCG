#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1245235083250487437LL;
unsigned char var_2 = (unsigned char)212;
long long int var_3 = -6404599880535579037LL;
long long int var_4 = 373515669525294567LL;
unsigned char var_6 = (unsigned char)89;
_Bool var_7 = (_Bool)1;
short var_8 = (short)32431;
_Bool var_9 = (_Bool)0;
long long int var_11 = 3976821185239798948LL;
unsigned long long int var_12 = 17365692276824192714ULL;
unsigned long long int var_13 = 11351269389483104207ULL;
unsigned short var_14 = (unsigned short)53691;
signed char var_15 = (signed char)19;
int zero = 0;
int var_18 = 1118838922;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)9877;
signed char var_21 = (signed char)-111;
int var_22 = -1697065377;
long long int var_23 = 3482983165863702645LL;
long long int var_24 = -2782969705802319586LL;
short var_25 = (short)-27043;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned long long int arr_6 [16] ;
unsigned long long int arr_7 [16] [16] ;
signed char arr_3 [15] ;
unsigned short arr_4 [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8414718878135111672LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13764876880806638255ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 16943369649857612824ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 4448544150637444874ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)37925;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)34396;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
