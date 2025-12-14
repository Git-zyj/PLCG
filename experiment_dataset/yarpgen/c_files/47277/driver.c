#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38213;
signed char var_1 = (signed char)-3;
unsigned int var_2 = 3347102019U;
unsigned char var_4 = (unsigned char)55;
unsigned char var_5 = (unsigned char)75;
unsigned char var_6 = (unsigned char)166;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 8061165966805141007ULL;
long long int var_9 = -6258408350511769001LL;
long long int var_10 = 2106776695447767874LL;
unsigned int var_12 = 3459434532U;
signed char var_13 = (signed char)-11;
long long int var_14 = 4497351955234296005LL;
int var_15 = -1607429613;
int zero = 0;
unsigned short var_16 = (unsigned short)55953;
signed char var_17 = (signed char)-86;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17102973423309585593ULL;
long long int var_20 = -1036626184323036201LL;
signed char var_21 = (signed char)85;
long long int var_22 = -1135154896466898353LL;
signed char var_23 = (signed char)-62;
unsigned long long int var_24 = 6856730799139180700ULL;
unsigned short var_25 = (unsigned short)36197;
_Bool var_26 = (_Bool)1;
long long int var_27 = 99655419790993081LL;
int var_28 = -479022828;
unsigned long long int var_29 = 7514675322334162085ULL;
signed char var_30 = (signed char)-9;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)14;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)27833;
unsigned int var_35 = 1807842957U;
unsigned long long int var_36 = 12253122999676761071ULL;
unsigned int var_37 = 2219088735U;
unsigned char var_38 = (unsigned char)14;
unsigned short var_39 = (unsigned short)34810;
signed char var_40 = (signed char)66;
int var_41 = 268476316;
_Bool var_42 = (_Bool)0;
signed char var_43 = (signed char)29;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)58;
_Bool var_46 = (_Bool)1;
unsigned long long int var_47 = 2378702795670701006ULL;
_Bool var_48 = (_Bool)1;
unsigned long long int var_49 = 102074568185461537ULL;
unsigned int var_50 = 884778258U;
long long int var_51 = 3264274211350363815LL;
signed char var_52 = (signed char)-78;
_Bool var_53 = (_Bool)1;
unsigned int var_54 = 3761803148U;
int var_55 = 1995512262;
unsigned char arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
short arr_3 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned char arr_9 [17] [17] [17] ;
unsigned short arr_10 [17] [17] ;
unsigned short arr_13 [17] [17] ;
unsigned long long int arr_14 [17] [17] ;
long long int arr_15 [17] [17] [17] ;
_Bool arr_16 [17] ;
int arr_20 [17] [17] ;
unsigned long long int arr_24 [17] [17] ;
_Bool arr_26 [17] [17] [17] [17] [17] [17] ;
signed char arr_39 [24] ;
unsigned short arr_40 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)126 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16127534369387123141ULL : 12867579926051037719ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22798;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 13092689984944987458ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)52035 : (unsigned short)65527;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)48280;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = 17079865507334361591ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 3686968340687570384LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = -1294402915;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 1570743346311353ULL : 15571507013540032136ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = (unsigned short)15780;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
