#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
int var_1 = 1469130841;
unsigned char var_2 = (unsigned char)162;
long long int var_5 = -3386228094738206384LL;
unsigned char var_7 = (unsigned char)15;
unsigned char var_8 = (unsigned char)126;
unsigned short var_9 = (unsigned short)25044;
unsigned short var_10 = (unsigned short)32190;
long long int var_11 = -8280608932147621610LL;
int var_14 = -243833693;
unsigned short var_15 = (unsigned short)46890;
unsigned char var_16 = (unsigned char)39;
unsigned char var_17 = (unsigned char)141;
int zero = 0;
unsigned char var_18 = (unsigned char)144;
unsigned char var_19 = (unsigned char)185;
int var_20 = -834384847;
long long int var_21 = -3870909935321133766LL;
unsigned char var_22 = (unsigned char)188;
long long int var_23 = -5828203815478671226LL;
int var_24 = -1803978307;
unsigned char var_25 = (unsigned char)28;
long long int var_26 = -2915493123028847158LL;
unsigned char var_27 = (unsigned char)186;
unsigned char var_28 = (unsigned char)208;
unsigned short var_29 = (unsigned short)18565;
unsigned short var_30 = (unsigned short)38165;
unsigned short var_31 = (unsigned short)24901;
unsigned char var_32 = (unsigned char)35;
unsigned short var_33 = (unsigned short)24234;
int arr_0 [23] ;
long long int arr_1 [23] ;
unsigned char arr_2 [23] ;
int arr_5 [22] ;
unsigned short arr_8 [22] [22] ;
long long int arr_11 [22] ;
unsigned short arr_12 [22] ;
long long int arr_18 [22] [22] ;
unsigned char arr_27 [22] [22] [22] [22] ;
int arr_33 [24] ;
int arr_34 [24] [24] ;
unsigned char arr_35 [24] ;
unsigned short arr_38 [24] [24] [24] ;
unsigned char arr_40 [24] [24] [24] [24] ;
long long int arr_42 [25] ;
int arr_43 [25] ;
long long int arr_3 [23] [23] ;
int arr_10 [22] [22] ;
int arr_14 [22] [22] [22] ;
unsigned char arr_15 [22] ;
long long int arr_16 [22] ;
unsigned char arr_21 [22] [22] ;
int arr_22 [22] ;
int arr_30 [22] [22] [22] ;
long long int arr_31 [22] [22] ;
unsigned short arr_44 [25] ;
int arr_45 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 447511048;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 487228466584570359LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -132676095;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)31022;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -6228901635816507032LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned short)10904;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = 4729987085489292358LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = -1740568395;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? -1761101540 : -1020719017;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)57386 : (unsigned short)6249;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = 2933286036846485536LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = -2115286712;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 860280792156054371LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 608381992 : -25021986;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 882463928;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 4389292197673381392LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = -974246883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -467845868 : 732060325;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = -2290587624204023683LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = (unsigned short)11435;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_45 [i_0] = -389442712;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
