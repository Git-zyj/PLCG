#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6179617024703430580ULL;
unsigned long long int var_3 = 17719583502204666993ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 9352418037370749983ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)95;
unsigned long long int var_16 = 17358624206195816016ULL;
signed char var_17 = (signed char)-100;
int var_18 = 210793102;
unsigned long long int var_19 = 12226038452103569136ULL;
signed char var_20 = (signed char)-122;
unsigned long long int var_21 = 15148598228055631548ULL;
unsigned char var_22 = (unsigned char)150;
long long int var_23 = 9178272704029090987LL;
unsigned long long int var_24 = 1090951857910113705ULL;
_Bool var_25 = (_Bool)1;
int var_26 = 104007716;
signed char var_27 = (signed char)-43;
_Bool var_28 = (_Bool)0;
long long int var_29 = -4198104047233250275LL;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
long long int var_33 = -8289738102809489277LL;
int var_34 = 1428669573;
unsigned char var_35 = (unsigned char)13;
signed char var_36 = (signed char)-13;
unsigned long long int var_37 = 9785276002078638791ULL;
unsigned long long int var_38 = 16527643273847010106ULL;
short arr_0 [21] [21] ;
long long int arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
signed char arr_6 [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
signed char arr_8 [21] [21] [21] ;
long long int arr_11 [12] [12] ;
_Bool arr_17 [12] [12] [12] ;
int arr_19 [12] [12] [12] [12] ;
unsigned char arr_23 [12] [12] [12] [12] [12] ;
unsigned long long int arr_26 [12] ;
int arr_34 [14] ;
unsigned long long int arr_40 [14] [14] [14] [14] ;
unsigned long long int arr_44 [18] [18] ;
unsigned int arr_48 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)31216 : (short)617;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -5921965464439332324LL : -2325045868591658179LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)57520;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 16810337931297230963ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 9486628300787242824ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)30 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = 3439473296184767901LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -544493359;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)119 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 16014189492662521178ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_34 [i_0] = 1153184985;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 8238874803261908651ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_44 [i_0] [i_1] = 12818283736257627660ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_48 [i_0] = 2181101704U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
