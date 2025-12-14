#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17243671587173100464ULL;
unsigned char var_3 = (unsigned char)51;
long long int var_7 = -6449542270600273921LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3308859188083631286LL;
unsigned char var_10 = (unsigned char)114;
signed char var_11 = (signed char)103;
short var_13 = (short)4363;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 413900501;
unsigned char var_18 = (unsigned char)151;
unsigned long long int var_19 = 837068004615969865ULL;
long long int var_20 = 3261959684294545864LL;
short var_21 = (short)4074;
long long int var_22 = -1100757213209628885LL;
short var_23 = (short)-23622;
unsigned short var_24 = (unsigned short)30506;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-38;
unsigned char var_27 = (unsigned char)156;
unsigned short arr_0 [23] [23] ;
signed char arr_2 [23] ;
short arr_3 [23] ;
short arr_6 [23] [23] [23] ;
signed char arr_9 [23] [23] [23] [23] ;
long long int arr_13 [23] [23] [23] [23] [23] ;
unsigned char arr_16 [21] [21] ;
long long int arr_19 [21] ;
unsigned char arr_20 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)32957;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-31136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)18338;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -2880570742610146634LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = -2819839336648796305LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)138 : (unsigned char)137;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
