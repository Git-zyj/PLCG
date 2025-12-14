#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14550;
short var_4 = (short)-13196;
unsigned long long int var_5 = 13873586243257979813ULL;
unsigned short var_6 = (unsigned short)31769;
signed char var_8 = (signed char)-18;
unsigned long long int var_9 = 2989207119106272331ULL;
short var_13 = (short)-29337;
int zero = 0;
unsigned char var_14 = (unsigned char)133;
unsigned short var_15 = (unsigned short)18181;
short var_16 = (short)-5156;
short var_17 = (short)-11030;
short var_18 = (short)29414;
short var_19 = (short)25757;
unsigned int var_20 = 2415576460U;
signed char var_21 = (signed char)-114;
short var_22 = (short)21213;
unsigned char var_23 = (unsigned char)194;
signed char var_24 = (signed char)42;
unsigned short var_25 = (unsigned short)2346;
int var_26 = -3581974;
short var_27 = (short)15509;
unsigned int var_28 = 2395603685U;
signed char var_29 = (signed char)-78;
short var_30 = (short)-28070;
short var_31 = (short)27007;
unsigned long long int var_32 = 6364108768130015433ULL;
unsigned char var_33 = (unsigned char)198;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 1669765608U;
unsigned int var_36 = 3510674055U;
unsigned char var_37 = (unsigned char)192;
signed char var_38 = (signed char)-75;
unsigned char var_39 = (unsigned char)222;
unsigned char var_40 = (unsigned char)95;
unsigned int var_41 = 1017870785U;
signed char var_42 = (signed char)32;
unsigned long long int var_43 = 2556619749767570231ULL;
short var_44 = (short)-18526;
unsigned long long int var_45 = 11438109808441262686ULL;
unsigned char var_46 = (unsigned char)94;
unsigned long long int var_47 = 7724487666910141931ULL;
_Bool var_48 = (_Bool)1;
unsigned long long int var_49 = 6914239022594643406ULL;
unsigned long long int var_50 = 11604495170634433311ULL;
unsigned char var_51 = (unsigned char)249;
signed char var_52 = (signed char)97;
unsigned long long int arr_0 [24] ;
int arr_1 [24] [24] ;
int arr_2 [24] [24] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_7 [13] [13] ;
int arr_9 [18] [18] ;
unsigned long long int arr_10 [18] ;
short arr_12 [24] ;
short arr_13 [24] [24] ;
unsigned short arr_15 [24] ;
long long int arr_16 [24] ;
long long int arr_17 [24] [24] [24] ;
int arr_18 [24] [24] [24] ;
int arr_21 [24] [24] ;
int arr_22 [24] [24] [24] [24] [24] ;
_Bool arr_24 [24] [24] ;
unsigned long long int arr_26 [24] ;
signed char arr_29 [24] ;
short arr_38 [17] ;
signed char arr_43 [17] [17] [17] [17] ;
signed char arr_51 [17] [17] [17] ;
short arr_56 [17] [17] ;
int arr_57 [17] [17] [17] ;
unsigned char arr_3 [24] ;
int arr_4 [24] [24] ;
short arr_11 [18] ;
unsigned char arr_23 [24] ;
unsigned short arr_28 [24] [24] ;
unsigned char arr_35 [24] [24] [24] ;
unsigned char arr_48 [17] [17] [17] [17] ;
int arr_67 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 9554163068993724945ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -913469343;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 996193576;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 11946565208363173735ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 5232179507760936666ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 731595143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 7001318823604099694ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (short)-28706;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (short)4741;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)41738;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = -3347416362001109835LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7821350914881355367LL : -1685535138841293384LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2100770520;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? -680085372 : -352111595;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = -343901569;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 10475584395524054387ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_38 [i_0] = (short)28974;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_56 [i_0] [i_1] = (short)8531;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = -1724334909;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -2144045318;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-20517 : (short)-12076;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)6841 : (unsigned short)32008;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)83 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_67 [i_0] [i_1] = 457339075;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_67 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
