#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3231312283U;
long long int var_1 = -6067697090463309034LL;
signed char var_2 = (signed char)-34;
unsigned long long int var_3 = 17617462736076701745ULL;
unsigned int var_4 = 2603814129U;
_Bool var_5 = (_Bool)1;
int var_6 = -1170532656;
unsigned short var_7 = (unsigned short)13402;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 110792822U;
unsigned char var_10 = (unsigned char)8;
int var_11 = 345834929;
unsigned int var_12 = 2026630555U;
unsigned int var_13 = 1836512168U;
long long int var_14 = 5068180768111047388LL;
unsigned short var_15 = (unsigned short)10906;
short var_16 = (short)423;
int zero = 0;
unsigned long long int var_17 = 8461339001077873853ULL;
unsigned long long int var_18 = 5898810732073853927ULL;
signed char var_19 = (signed char)-55;
unsigned int var_20 = 1851623820U;
unsigned char var_21 = (unsigned char)181;
unsigned int var_22 = 1419660641U;
unsigned int var_23 = 3717633262U;
unsigned int var_24 = 2841964793U;
_Bool var_25 = (_Bool)0;
int var_26 = -384681169;
unsigned int var_27 = 3697721585U;
unsigned char var_28 = (unsigned char)248;
signed char var_29 = (signed char)-55;
unsigned long long int var_30 = 10078676428725181276ULL;
signed char var_31 = (signed char)-76;
unsigned short var_32 = (unsigned short)26424;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 2576060103U;
_Bool var_35 = (_Bool)0;
signed char var_36 = (signed char)-84;
short var_37 = (short)1929;
short var_38 = (short)-14916;
unsigned int var_39 = 2169635134U;
int var_40 = 1265053688;
unsigned short var_41 = (unsigned short)10265;
int var_42 = -535468649;
unsigned int var_43 = 3432774473U;
signed char var_44 = (signed char)63;
unsigned int var_45 = 4243600055U;
unsigned long long int var_46 = 19653948887282655ULL;
unsigned char var_47 = (unsigned char)98;
unsigned int var_48 = 3915160903U;
unsigned int var_49 = 3667084707U;
int arr_9 [13] ;
signed char arr_14 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_21 [13] [13] [13] ;
unsigned long long int arr_30 [11] ;
unsigned int arr_33 [11] [11] ;
unsigned int arr_38 [11] [11] ;
signed char arr_41 [11] [11] [11] ;
unsigned long long int arr_47 [11] [11] [11] [11] ;
unsigned int arr_50 [11] [11] ;
unsigned long long int arr_57 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -1659655660;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)15 : (signed char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 13670030238577927420ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = 8197905724636009880ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 1445483493U : 2878480215U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? 1738466646U : 2780250803U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 1332093444687104966ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_50 [i_0] [i_1] = 619636838U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_57 [i_0] = 10649127246002640333ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_57 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
