#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)98;
unsigned char var_3 = (unsigned char)63;
unsigned char var_4 = (unsigned char)77;
unsigned long long int var_5 = 15949378547241412764ULL;
int var_6 = 2037198710;
unsigned short var_7 = (unsigned short)20340;
signed char var_9 = (signed char)105;
_Bool var_10 = (_Bool)1;
int var_11 = 1997460256;
unsigned long long int var_12 = 7870018965734918284ULL;
unsigned long long int var_14 = 5617697865373533335ULL;
unsigned long long int var_15 = 5438620199273897970ULL;
int zero = 0;
int var_16 = -1738001744;
unsigned int var_17 = 615374416U;
unsigned char var_18 = (unsigned char)79;
unsigned char var_19 = (unsigned char)230;
unsigned long long int var_20 = 11876124101473283742ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17440134751528643278ULL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-48;
unsigned int var_25 = 3593840631U;
unsigned long long int var_26 = 5750943043977747001ULL;
unsigned char var_27 = (unsigned char)147;
unsigned short var_28 = (unsigned short)29139;
unsigned int var_29 = 4144118401U;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1929980464U;
unsigned int var_32 = 2499614043U;
unsigned long long int var_33 = 18149995324396147008ULL;
_Bool var_34 = (_Bool)1;
unsigned long long int var_35 = 5245787445422844217ULL;
unsigned long long int var_36 = 14764469263267022722ULL;
unsigned int var_37 = 2463907375U;
unsigned char var_38 = (unsigned char)27;
unsigned char var_39 = (unsigned char)10;
_Bool var_40 = (_Bool)0;
unsigned long long int var_41 = 6320946653881803019ULL;
unsigned int var_42 = 3191272327U;
unsigned long long int var_43 = 6123710811610467480ULL;
signed char var_44 = (signed char)-105;
unsigned long long int var_45 = 9011647207046396586ULL;
int var_46 = -1622647549;
unsigned short var_47 = (unsigned short)31379;
int var_48 = 1312736294;
unsigned char var_49 = (unsigned char)70;
int var_50 = 573748153;
unsigned long long int var_51 = 16574111707064996824ULL;
unsigned char var_52 = (unsigned char)166;
_Bool var_53 = (_Bool)1;
_Bool var_54 = (_Bool)1;
int var_55 = -1776096584;
_Bool var_56 = (_Bool)0;
_Bool var_57 = (_Bool)0;
_Bool var_58 = (_Bool)1;
unsigned int var_59 = 1544043301U;
unsigned short var_60 = (unsigned short)30011;
unsigned short var_61 = (unsigned short)57416;
int var_62 = -700551948;
unsigned char var_63 = (unsigned char)252;
unsigned short var_64 = (unsigned short)7080;
unsigned char var_65 = (unsigned char)5;
unsigned long long int var_66 = 17325123393645239462ULL;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] ;
int arr_2 [25] ;
unsigned char arr_4 [24] [24] ;
_Bool arr_5 [24] ;
unsigned int arr_6 [24] [24] ;
_Bool arr_8 [24] [24] [24] ;
unsigned short arr_10 [24] [24] [24] ;
unsigned char arr_11 [24] [24] [24] ;
int arr_12 [24] ;
unsigned long long int arr_13 [24] [24] ;
signed char arr_15 [24] [24] ;
_Bool arr_18 [24] [24] [24] ;
unsigned int arr_19 [24] [24] [24] [24] ;
_Bool arr_21 [24] [24] ;
int arr_22 [24] [24] [24] ;
unsigned char arr_27 [24] [24] [24] ;
unsigned long long int arr_28 [24] [24] [24] ;
unsigned long long int arr_31 [24] [24] [24] ;
unsigned long long int arr_37 [24] ;
unsigned long long int arr_42 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1146736259U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2114020721U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -323637885;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)9 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 396141131U : 4152825457U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)39877 : (unsigned short)31805;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)166 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1042795846 : 1496276620;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 13926762634875091638ULL : 5157817645245895588ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-9 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3330153744U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 1966333427;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 10196499326856206686ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 5634740798087630230ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 7807527451906540817ULL : 12752490681950887082ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = 2322506448120724016ULL;
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
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
