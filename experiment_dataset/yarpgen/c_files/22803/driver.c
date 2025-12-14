#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
unsigned short var_1 = (unsigned short)60402;
long long int var_3 = 7350786323387555965LL;
int var_4 = -743707487;
int var_5 = 1660271410;
signed char var_6 = (signed char)15;
int var_8 = 1934954896;
unsigned long long int var_9 = 5272561153917240315ULL;
int var_10 = -728613296;
short var_11 = (short)-26216;
short var_14 = (short)4453;
unsigned short var_15 = (unsigned short)65005;
int zero = 0;
int var_16 = -1869607879;
signed char var_17 = (signed char)-11;
unsigned long long int var_18 = 1206129902084299028ULL;
int var_19 = 1949075683;
_Bool var_20 = (_Bool)1;
long long int var_21 = 9202030581963241400LL;
short var_22 = (short)5922;
unsigned long long int var_23 = 10806637838253995874ULL;
signed char var_24 = (signed char)121;
signed char var_25 = (signed char)15;
unsigned short var_26 = (unsigned short)25521;
int var_27 = 1695534681;
long long int var_28 = 3386337007573257776LL;
int var_29 = -1434638351;
unsigned char var_30 = (unsigned char)149;
long long int var_31 = -2440619538534507213LL;
signed char var_32 = (signed char)59;
signed char var_33 = (signed char)65;
unsigned int var_34 = 929022491U;
short arr_0 [17] [17] ;
long long int arr_1 [17] ;
signed char arr_3 [17] [17] [17] ;
int arr_5 [17] ;
int arr_12 [17] [17] [17] [17] [17] ;
long long int arr_13 [17] [17] [17] [17] ;
long long int arr_22 [23] ;
int arr_24 [23] [23] ;
int arr_2 [17] ;
unsigned short arr_14 [17] [17] [17] [17] ;
long long int arr_18 [14] [14] ;
signed char arr_21 [13] [13] ;
signed char arr_25 [23] ;
signed char arr_41 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16197;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3207212867793903857LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -1446834490;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -2120907957;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -7243389918191923233LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 4237404734055314341LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = 1154529394;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1382884815;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10933;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 618370747391793349LL : 8367568126939950272LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)83 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_41 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-25 : (signed char)17;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
