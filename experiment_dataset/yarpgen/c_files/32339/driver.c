#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3590516955U;
long long int var_2 = -8262896000855476451LL;
long long int var_3 = 6222181510883568643LL;
unsigned short var_4 = (unsigned short)6434;
long long int var_5 = 92976790462093661LL;
unsigned short var_6 = (unsigned short)5635;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)30841;
long long int var_9 = 5229664140597106738LL;
int var_10 = -1095997396;
unsigned short var_11 = (unsigned short)63181;
long long int var_12 = -8731132534167159997LL;
long long int var_14 = 4802438012331552589LL;
long long int var_15 = -6273821391047344720LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1850924883;
short var_18 = (short)21284;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)28196;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-43;
long long int var_23 = 5246974990447720115LL;
short var_24 = (short)1779;
unsigned short var_25 = (unsigned short)19103;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)56957;
short var_29 = (short)4940;
short var_30 = (short)16746;
unsigned short arr_3 [15] ;
unsigned char arr_7 [15] ;
unsigned char arr_16 [15] [15] [15] [15] ;
unsigned int arr_4 [15] [15] [15] ;
_Bool arr_5 [15] ;
unsigned short arr_18 [15] ;
_Bool arr_19 [15] ;
unsigned char arr_22 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)4254;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)111 : (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4126506829U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned short)31756;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)217 : (unsigned char)222;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
