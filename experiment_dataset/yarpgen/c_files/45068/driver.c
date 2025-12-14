#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2936858789U;
signed char var_1 = (signed char)79;
signed char var_3 = (signed char)127;
unsigned char var_4 = (unsigned char)111;
signed char var_5 = (signed char)18;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8407105606091034613LL;
signed char var_8 = (signed char)-127;
long long int var_9 = -3436321047386803772LL;
long long int var_10 = -4909358103495505644LL;
unsigned short var_11 = (unsigned short)56560;
long long int var_12 = 4314066886699295581LL;
unsigned short var_13 = (unsigned short)8033;
unsigned short var_14 = (unsigned short)55266;
int zero = 0;
signed char var_15 = (signed char)89;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)20749;
signed char var_18 = (signed char)124;
unsigned short var_19 = (unsigned short)58207;
signed char var_20 = (signed char)-72;
long long int var_21 = -6291958376304343333LL;
long long int var_22 = -8240978926762818599LL;
unsigned short var_23 = (unsigned short)16457;
signed char var_24 = (signed char)124;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-30;
long long int arr_0 [18] ;
signed char arr_1 [18] ;
signed char arr_2 [18] ;
int arr_6 [11] ;
signed char arr_7 [11] [11] ;
long long int arr_9 [11] [11] ;
signed char arr_11 [11] [11] [11] ;
int arr_12 [11] ;
signed char arr_3 [18] ;
unsigned short arr_4 [18] [18] ;
signed char arr_14 [11] [11] [11] ;
unsigned int arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7981101133435400634LL : 3689988839962585332LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)122 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)-110;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -1555394515;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = -6075874602331620250LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = -1463980524;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-30 : (signed char)54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)12906 : (unsigned short)55054;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 1335514193U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
