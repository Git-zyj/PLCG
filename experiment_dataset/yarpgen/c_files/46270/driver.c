#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
unsigned int var_2 = 3493761444U;
unsigned long long int var_4 = 879185878178032569ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7574539988525029586LL;
long long int var_10 = -5494229093275629038LL;
unsigned long long int var_11 = 15830244526308588342ULL;
long long int var_15 = 4237725340780054586LL;
int zero = 0;
int var_16 = -1604582278;
unsigned short var_17 = (unsigned short)31260;
unsigned int var_18 = 949411381U;
int var_19 = 1508936036;
signed char var_20 = (signed char)-71;
int var_21 = -1662320971;
int var_22 = 1061561222;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 4256540509802585528ULL;
signed char var_25 = (signed char)-19;
unsigned char var_26 = (unsigned char)181;
long long int var_27 = -2679656478490388210LL;
short arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
int arr_3 [14] ;
long long int arr_5 [14] ;
short arr_6 [14] [14] ;
signed char arr_8 [14] ;
_Bool arr_4 [14] [14] ;
_Bool arr_15 [14] ;
unsigned long long int arr_20 [14] ;
long long int arr_21 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-9371;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 710513672U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1354155116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 7014826836388943574LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)18053;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 17632299230665613486ULL : 14447164013583590139ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3673047230802999454LL : 854056116152213953LL;
}

void checksum() {
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
