#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2303474239U;
long long int var_2 = -3619349783358911671LL;
long long int var_3 = 165782742364728439LL;
long long int var_4 = -3201471996665152924LL;
unsigned short var_5 = (unsigned short)32452;
short var_6 = (short)17729;
unsigned char var_7 = (unsigned char)29;
long long int var_8 = 7020274213591489680LL;
long long int var_9 = 7796366459227292283LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = -1822651350187062756LL;
int var_12 = 1877800004;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1139690948453337019LL;
int var_15 = 2101934733;
int var_16 = -1408376932;
long long int var_17 = -6740428761429085123LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5029269035159417874LL;
unsigned int var_20 = 1100665424U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
long long int var_23 = 2043576944910822129LL;
int var_24 = -2009565411;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2222130066U;
long long int var_27 = 7591092037978307695LL;
_Bool var_28 = (_Bool)1;
long long int var_29 = 6329695162283462884LL;
int var_30 = 1915490631;
unsigned char var_31 = (unsigned char)16;
long long int var_32 = 7618224282703873020LL;
_Bool var_33 = (_Bool)1;
short var_34 = (short)30408;
long long int var_35 = 1470573391558624060LL;
_Bool var_36 = (_Bool)0;
long long int var_37 = -5393696611111081165LL;
long long int var_38 = -1922394384054328286LL;
unsigned char var_39 = (unsigned char)123;
short var_40 = (short)15777;
int var_41 = 1329020289;
unsigned short var_42 = (unsigned short)47911;
unsigned int var_43 = 2903775534U;
long long int var_44 = -3248713993067664858LL;
unsigned char var_45 = (unsigned char)67;
_Bool var_46 = (_Bool)1;
long long int var_47 = -7596229813302067011LL;
_Bool var_48 = (_Bool)0;
_Bool var_49 = (_Bool)0;
int var_50 = -807162705;
long long int var_51 = -6579701603931985430LL;
long long int var_52 = 1191402196463484891LL;
_Bool var_53 = (_Bool)0;
long long int arr_9 [22] [22] ;
_Bool arr_18 [22] [22] [22] [22] ;
long long int arr_30 [22] ;
_Bool arr_40 [22] ;
short arr_41 [22] ;
int arr_45 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 9050078460809773969LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = -1824473860702378227LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (short)26268;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_45 [i_0] [i_1] = -1443386317;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
