#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)67;
short var_2 = (short)11323;
unsigned short var_3 = (unsigned short)621;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)21236;
signed char var_7 = (signed char)39;
unsigned char var_8 = (unsigned char)44;
unsigned int var_9 = 1424538832U;
int zero = 0;
unsigned char var_10 = (unsigned char)70;
short var_11 = (short)-14758;
unsigned short var_12 = (unsigned short)9587;
unsigned short var_13 = (unsigned short)56615;
long long int var_14 = 2035416566713840048LL;
short var_15 = (short)-7073;
long long int var_16 = -2781540075112449413LL;
short var_17 = (short)-15983;
unsigned char var_18 = (unsigned char)138;
unsigned long long int var_19 = 15262061857273441345ULL;
int var_20 = -1605777747;
signed char var_21 = (signed char)59;
long long int var_22 = -3799020541127093830LL;
unsigned short var_23 = (unsigned short)10761;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 7730682852604806772ULL;
long long int var_26 = -5206273041307190214LL;
unsigned short var_27 = (unsigned short)45292;
short var_28 = (short)15419;
unsigned long long int var_29 = 5172515139596027299ULL;
_Bool var_30 = (_Bool)1;
long long int var_31 = 8707754866055480791LL;
signed char var_32 = (signed char)118;
long long int var_33 = 885776246088075220LL;
unsigned short var_34 = (unsigned short)35301;
long long int var_35 = 5945143386348302137LL;
long long int var_36 = 857244796175565766LL;
unsigned long long int var_37 = 9801664140305257316ULL;
short var_38 = (short)12123;
long long int var_39 = -8074351166444355455LL;
signed char var_40 = (signed char)30;
signed char var_41 = (signed char)31;
unsigned char var_42 = (unsigned char)178;
_Bool var_43 = (_Bool)0;
unsigned long long int var_44 = 16189905297198158446ULL;
unsigned long long int var_45 = 14543108905023090249ULL;
unsigned char var_46 = (unsigned char)238;
long long int var_47 = -4061509899530959704LL;
long long int var_48 = -5434031128496935276LL;
long long int arr_2 [21] ;
short arr_3 [21] ;
short arr_4 [21] ;
_Bool arr_5 [21] [21] ;
unsigned int arr_6 [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
int arr_13 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_14 [21] ;
unsigned long long int arr_17 [21] ;
long long int arr_18 [21] ;
int arr_19 [21] [21] ;
unsigned char arr_20 [21] [21] [21] ;
unsigned short arr_22 [21] [21] [21] ;
int arr_25 [19] ;
unsigned long long int arr_26 [19] ;
unsigned long long int arr_28 [19] [19] ;
unsigned short arr_33 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1596964038805350789LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)9776;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)4896;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3931493691U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 186142038U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1437164826;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 3098347897U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 767958922247083279ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 3074163380168297195LL : -2727699081062409357LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = -1143072465;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)5728 : (unsigned short)19977;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = 1658611593;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = 1547834471681720609ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = 11859975105003463419ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)45877 : (unsigned short)21523;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
