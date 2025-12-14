#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
_Bool var_2 = (_Bool)1;
short var_4 = (short)189;
unsigned char var_6 = (unsigned char)182;
unsigned short var_7 = (unsigned short)60437;
unsigned long long int var_9 = 6050961210214465879ULL;
unsigned short var_10 = (unsigned short)54989;
unsigned char var_11 = (unsigned char)120;
int var_16 = -1949289788;
unsigned char var_17 = (unsigned char)162;
int zero = 0;
signed char var_19 = (signed char)0;
unsigned char var_20 = (unsigned char)199;
long long int var_21 = 6662253457662205845LL;
unsigned short var_22 = (unsigned short)48369;
short var_23 = (short)17557;
int var_24 = -583339533;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)61031;
long long int var_27 = 5526489979685605659LL;
long long int var_28 = 6088888683152257277LL;
long long int var_29 = -5134406840227776136LL;
int var_30 = 1800042785;
unsigned long long int var_31 = 9194009987151915800ULL;
unsigned char var_32 = (unsigned char)245;
short var_33 = (short)21690;
unsigned short var_34 = (unsigned short)10978;
unsigned short var_35 = (unsigned short)65093;
_Bool arr_0 [19] ;
unsigned short arr_1 [19] ;
short arr_2 [19] [19] [19] ;
int arr_4 [19] [19] ;
long long int arr_7 [19] [19] [19] ;
unsigned long long int arr_8 [19] ;
short arr_15 [19] ;
unsigned char arr_16 [22] ;
unsigned int arr_17 [22] ;
unsigned short arr_5 [19] [19] [19] ;
long long int arr_18 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)56869;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)25757;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 1603662974;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7973248109710981717LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 17765669869537546844ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (short)-21379;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1113156515U : 769146330U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)34093;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -3729956643022551098LL : -6255744487365548706LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
