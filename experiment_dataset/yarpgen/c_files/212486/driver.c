#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17989625119040837378ULL;
signed char var_3 = (signed char)79;
unsigned short var_4 = (unsigned short)29468;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_8 = 292612220;
long long int var_10 = -9023348563877936287LL;
unsigned long long int var_11 = 6168218832191725821ULL;
int var_12 = 789335200;
int var_13 = -1504809240;
signed char var_14 = (signed char)-79;
unsigned int var_15 = 2125844832U;
unsigned long long int var_16 = 8639488926011155504ULL;
unsigned short var_18 = (unsigned short)24663;
unsigned int var_19 = 1473904146U;
int zero = 0;
unsigned short var_20 = (unsigned short)10920;
signed char var_21 = (signed char)-89;
short var_22 = (short)23002;
unsigned char var_23 = (unsigned char)227;
unsigned int var_24 = 2429987059U;
signed char var_25 = (signed char)-7;
short var_26 = (short)-29384;
signed char var_27 = (signed char)-82;
long long int var_28 = 7472506453776160898LL;
long long int var_29 = -5134442489239880534LL;
unsigned long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
unsigned char arr_2 [10] ;
int arr_3 [10] [10] [10] ;
signed char arr_4 [10] ;
unsigned char arr_6 [10] [10] [10] ;
unsigned short arr_7 [10] [10] [10] [10] ;
long long int arr_8 [10] [10] [10] [10] ;
int arr_10 [10] [10] [10] [10] [10] [10] ;
int arr_11 [10] ;
int arr_15 [14] ;
unsigned long long int arr_17 [14] ;
short arr_18 [14] ;
signed char arr_9 [10] [10] ;
short arr_13 [10] [10] [10] [10] ;
unsigned long long int arr_14 [10] ;
unsigned char arr_20 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 12712693832883964232ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3715733296U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1855782782;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)10223 : (unsigned short)14543;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -5201447308748604785LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -1511304061 : 1306706404;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -1649564276;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = -564733079;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 3292623609782846347ULL : 4107401405396840285ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (short)-17955;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-86 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-30474 : (short)10122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3045533593500941907ULL : 12881197634459278315ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)252;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
