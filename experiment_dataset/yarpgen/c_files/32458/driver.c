#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned char var_1 = (unsigned char)43;
long long int var_2 = -8566472648435542526LL;
long long int var_3 = -3959947869008314465LL;
long long int var_4 = 6503938643439870224LL;
long long int var_5 = -4765963330050893067LL;
int var_6 = 1106709790;
long long int var_7 = 3902320019567410820LL;
long long int var_8 = -1999076114571261431LL;
unsigned char var_9 = (unsigned char)199;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)78;
unsigned char var_12 = (unsigned char)204;
long long int var_13 = 6945576952603470306LL;
unsigned short var_14 = (unsigned short)23765;
unsigned char var_15 = (unsigned char)57;
unsigned char var_16 = (unsigned char)45;
unsigned long long int var_17 = 1540168855066726426ULL;
int zero = 0;
long long int var_18 = 7635867854118387570LL;
unsigned char var_19 = (unsigned char)140;
short var_20 = (short)23307;
int var_21 = -426715871;
unsigned char var_22 = (unsigned char)243;
long long int var_23 = -3117565089033495232LL;
unsigned short var_24 = (unsigned short)25536;
long long int var_25 = -1792438529655280293LL;
long long int var_26 = 1772086507571368630LL;
unsigned char var_27 = (unsigned char)216;
short var_28 = (short)-19922;
int var_29 = 693198913;
signed char arr_0 [12] ;
long long int arr_2 [12] ;
signed char arr_3 [12] ;
_Bool arr_6 [12] [12] [12] ;
unsigned long long int arr_7 [12] [12] ;
unsigned char arr_8 [12] ;
int arr_9 [12] ;
_Bool arr_11 [12] [12] [12] [12] ;
unsigned long long int arr_12 [12] [12] [12] [12] ;
unsigned short arr_10 [12] [12] [12] ;
unsigned char arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3760862168190101697LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 16003039905827330527ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 169620984;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 14327064093711330292ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)41701;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned char)3;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
