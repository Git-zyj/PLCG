#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)22657;
short var_4 = (short)-5494;
unsigned char var_5 = (unsigned char)55;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)93;
signed char var_8 = (signed char)112;
unsigned long long int var_10 = 12617981161055055698ULL;
int zero = 0;
int var_11 = 866409697;
unsigned short var_12 = (unsigned short)15700;
_Bool var_13 = (_Bool)0;
int var_14 = 676650957;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-30285;
long long int var_17 = 1770127959338955824LL;
unsigned short var_18 = (unsigned short)30071;
unsigned short var_19 = (unsigned short)38098;
unsigned char var_20 = (unsigned char)138;
long long int var_21 = -733049392503037942LL;
short var_22 = (short)-25970;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)98;
short var_26 = (short)-29166;
unsigned char var_27 = (unsigned char)53;
long long int var_28 = -4220079503919122420LL;
long long int var_29 = 6984021259457931724LL;
signed char var_30 = (signed char)91;
long long int var_31 = -2950486884868684919LL;
unsigned short var_32 = (unsigned short)25316;
unsigned int var_33 = 1749450047U;
signed char var_34 = (signed char)8;
long long int var_35 = 4486111628674229216LL;
int var_36 = -731944605;
signed char var_37 = (signed char)4;
short var_38 = (short)27501;
short var_39 = (short)-32316;
unsigned short var_40 = (unsigned short)12076;
long long int var_41 = 4390655731100272759LL;
int var_42 = -763343654;
int arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned short arr_3 [12] [12] ;
unsigned int arr_4 [12] [12] [12] ;
unsigned char arr_5 [12] [12] [12] ;
unsigned short arr_6 [12] [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] [12] [12] ;
_Bool arr_8 [12] [12] [12] [12] ;
unsigned int arr_9 [12] ;
int arr_10 [12] [12] [12] ;
short arr_11 [12] [12] [12] [12] ;
unsigned short arr_12 [12] ;
unsigned short arr_13 [12] [12] [12] ;
unsigned int arr_14 [12] ;
unsigned short arr_16 [12] [12] ;
unsigned short arr_17 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_18 [12] [12] [12] [12] ;
unsigned long long int arr_20 [12] [12] [12] [12] ;
unsigned long long int arr_22 [12] [12] [12] ;
unsigned int arr_25 [12] [12] [12] [12] ;
_Bool arr_26 [12] [12] [12] [12] ;
long long int arr_30 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_39 [18] ;
unsigned int arr_40 [18] ;
short arr_41 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -417852462;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4031883061U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)45688;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)1174;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 18929132U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2991;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 2789915858U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -286827079;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-13406;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)21492;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)19020;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 401123106U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)61611;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)13720;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 17952405977496857532ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11702956552520718702ULL : 5098524726167998071ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 4090485278U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -7452432784532778369LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = (unsigned short)16002;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = 1724657190U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_41 [i_0] [i_1] = (short)22680;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
