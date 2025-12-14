#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
unsigned int var_4 = 1591020571U;
unsigned int var_5 = 4040473607U;
unsigned long long int var_6 = 16922621185039316434ULL;
int var_7 = 600709690;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7786016192718645820ULL;
signed char var_12 = (signed char)-53;
short var_13 = (short)-25886;
unsigned long long int var_15 = 4058873613166968625ULL;
signed char var_17 = (signed char)-81;
unsigned int var_18 = 905924931U;
int zero = 0;
unsigned char var_20 = (unsigned char)215;
signed char var_21 = (signed char)-9;
_Bool var_22 = (_Bool)1;
long long int var_23 = -7128241648573674755LL;
unsigned long long int var_24 = 12834336208277163183ULL;
unsigned char var_25 = (unsigned char)91;
_Bool var_26 = (_Bool)1;
long long int var_27 = 79983315122044401LL;
signed char var_28 = (signed char)35;
short var_29 = (short)-31717;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
int var_32 = -354232635;
short var_33 = (short)10681;
int var_34 = -1376287331;
unsigned int var_35 = 1427691258U;
unsigned short var_36 = (unsigned short)13574;
unsigned char var_37 = (unsigned char)61;
unsigned short var_38 = (unsigned short)56888;
unsigned short var_39 = (unsigned short)38242;
int var_40 = 25836218;
long long int arr_0 [13] [13] ;
_Bool arr_3 [17] ;
long long int arr_15 [22] [22] ;
unsigned char arr_16 [22] ;
unsigned int arr_19 [22] ;
_Bool arr_21 [22] [22] [22] ;
unsigned int arr_22 [22] ;
long long int arr_23 [22] [22] ;
unsigned int arr_25 [22] [22] [22] [22] ;
int arr_27 [22] [22] ;
_Bool arr_30 [22] [22] [22] ;
short arr_41 [22] ;
signed char arr_2 [13] [13] ;
long long int arr_14 [17] [17] [17] [17] [17] ;
unsigned long long int arr_29 [22] [22] [22] ;
_Bool arr_37 [22] [22] [22] [22] ;
unsigned short arr_38 [22] [22] [22] [22] ;
signed char arr_39 [22] [22] ;
unsigned long long int arr_46 [22] [22] [22] [22] ;
signed char arr_49 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1898552887158924362LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = -800667188986704326LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 3089956117U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 3157396980U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = 5539311524344800503LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 2311633014U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = 1602216872;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (short)13654;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 4852076626058171688LL : -4912360928936118069LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 15068770335252712114ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned short)53388;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_39 [i_0] [i_1] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2416935672637254388ULL : 2748460284490314877ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_49 [i_0] = (signed char)-109;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
