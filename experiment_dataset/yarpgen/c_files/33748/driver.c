#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
signed char var_1 = (signed char)95;
long long int var_2 = 2205952568496072209LL;
int var_3 = -663482049;
unsigned char var_4 = (unsigned char)226;
unsigned char var_5 = (unsigned char)186;
signed char var_6 = (signed char)127;
short var_7 = (short)6395;
long long int var_8 = -2077400892714299574LL;
long long int var_9 = -1839288927000183478LL;
unsigned char var_10 = (unsigned char)131;
long long int var_11 = 9089248891489091591LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2100926826101324064LL;
short var_15 = (short)-10854;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)50;
int zero = 0;
short var_18 = (short)1625;
long long int var_19 = -1281895453557323228LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)88;
short var_22 = (short)-19903;
unsigned short var_23 = (unsigned short)44065;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)60259;
signed char var_27 = (signed char)-90;
int var_28 = -491315521;
unsigned long long int var_29 = 2862347328494598525ULL;
unsigned int var_30 = 3820830893U;
int var_31 = 1530000368;
unsigned long long int var_32 = 14391330198817384378ULL;
long long int var_33 = -8955060738953039018LL;
unsigned char var_34 = (unsigned char)163;
signed char var_35 = (signed char)124;
unsigned char var_36 = (unsigned char)196;
int var_37 = -2092524780;
unsigned long long int var_38 = 4935131636381653246ULL;
_Bool var_39 = (_Bool)0;
unsigned int var_40 = 2852782373U;
short var_41 = (short)18114;
unsigned char var_42 = (unsigned char)158;
unsigned short var_43 = (unsigned short)10873;
short var_44 = (short)25351;
short var_45 = (short)-30793;
int var_46 = -2124024935;
signed char var_47 = (signed char)6;
unsigned char var_48 = (unsigned char)21;
unsigned int var_49 = 2989091954U;
short var_50 = (short)22364;
short var_51 = (short)-18551;
long long int var_52 = 7778503432963093514LL;
_Bool var_53 = (_Bool)1;
short var_54 = (short)-10343;
unsigned char var_55 = (unsigned char)8;
long long int var_56 = -5403539400547966005LL;
unsigned short var_57 = (unsigned short)16265;
_Bool var_58 = (_Bool)1;
int var_59 = 1842488465;
unsigned char var_60 = (unsigned char)141;
unsigned char var_61 = (unsigned char)208;
signed char var_62 = (signed char)39;
unsigned int var_63 = 3963031555U;
signed char arr_0 [25] [25] ;
long long int arr_2 [25] [25] [25] ;
signed char arr_5 [25] [25] ;
unsigned short arr_6 [25] [25] ;
_Bool arr_7 [25] [25] [25] ;
int arr_10 [25] [25] ;
short arr_12 [25] [25] [25] ;
signed char arr_13 [25] [25] [25] ;
_Bool arr_14 [25] [25] [25] [25] ;
signed char arr_15 [25] [25] [25] ;
unsigned short arr_16 [25] [25] [25] [25] ;
int arr_18 [25] [25] [25] [25] [25] ;
_Bool arr_19 [25] [25] ;
unsigned long long int arr_20 [25] [25] [25] [25] ;
unsigned short arr_21 [25] [25] [25] [25] [25] ;
_Bool arr_25 [23] ;
signed char arr_26 [23] ;
int arr_29 [23] ;
unsigned char arr_30 [23] ;
unsigned short arr_32 [23] [23] [23] [23] ;
signed char arr_34 [23] [23] [23] [23] ;
unsigned int arr_39 [23] ;
int arr_51 [23] [23] ;
short arr_58 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3338041825394023199LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)42442;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 1517517676 : -1580445966;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)22382;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)28940;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -189455818 : 70238526;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17963695445951215687ULL : 16956862351449836084ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)32477 : (unsigned short)4351;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 2056482934 : -667724998;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60347;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 2049018782U : 4077064309U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_51 [i_0] [i_1] = -1936669329;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5689 : (short)-24090;
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
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
