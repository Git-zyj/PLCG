#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7560238084606111770LL;
unsigned long long int var_17 = 8650934551003333717ULL;
unsigned char var_19 = (unsigned char)134;
int zero = 0;
unsigned char var_20 = (unsigned char)202;
unsigned long long int var_21 = 10204488820001659930ULL;
_Bool var_22 = (_Bool)0;
int var_23 = 2074438216;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)202;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 16364507967440496362ULL;
unsigned char var_28 = (unsigned char)181;
long long int var_29 = 6231947375563856000LL;
unsigned char var_30 = (unsigned char)27;
unsigned int var_31 = 3735305782U;
int var_32 = 1672599792;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 1515369843U;
unsigned short var_35 = (unsigned short)47475;
_Bool var_36 = (_Bool)0;
unsigned short var_37 = (unsigned short)56164;
short var_38 = (short)-19840;
unsigned int var_39 = 2576750213U;
unsigned short var_40 = (unsigned short)26999;
unsigned short var_41 = (unsigned short)43118;
int var_42 = 1490349433;
int var_43 = -1966023987;
unsigned char var_44 = (unsigned char)229;
unsigned long long int var_45 = 6302451304247299058ULL;
unsigned long long int var_46 = 8716290641251953174ULL;
_Bool var_47 = (_Bool)1;
_Bool var_48 = (_Bool)1;
unsigned short var_49 = (unsigned short)24886;
unsigned char var_50 = (unsigned char)86;
unsigned long long int arr_6 [17] ;
short arr_13 [17] [17] [17] ;
unsigned char arr_24 [17] ;
unsigned short arr_27 [17] [17] [17] [17] ;
int arr_34 [17] [17] [17] [17] ;
unsigned char arr_41 [17] [17] [17] [17] ;
long long int arr_45 [23] ;
unsigned char arr_54 [23] [23] [23] ;
int arr_55 [23] [23] [23] ;
unsigned long long int arr_56 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 10051967711369694190ULL : 7089816351594984676ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-26211 : (short)-1774;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4259;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -872416173;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)212 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_45 [i_0] = -5602512896108419222LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1646447362 : 1860278617;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_56 [i_0] = 4248192062923751725ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_54 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
