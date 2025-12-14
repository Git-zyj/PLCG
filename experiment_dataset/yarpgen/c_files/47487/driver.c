#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4852166009306965331ULL;
unsigned char var_1 = (unsigned char)148;
unsigned char var_2 = (unsigned char)139;
unsigned long long int var_3 = 16782983264910369538ULL;
unsigned char var_4 = (unsigned char)133;
unsigned int var_5 = 4205598982U;
int var_6 = 806608734;
unsigned short var_7 = (unsigned short)32651;
unsigned long long int var_8 = 17180363623920466495ULL;
unsigned long long int var_9 = 96043886856423623ULL;
unsigned int var_10 = 667094933U;
int var_11 = 1166194377;
int var_12 = -1944415309;
long long int var_13 = -2608767980869665190LL;
signed char var_14 = (signed char)95;
unsigned int var_15 = 2104251506U;
unsigned short var_16 = (unsigned short)52937;
unsigned long long int var_17 = 16261775330861845896ULL;
unsigned int var_18 = 1380372377U;
int zero = 0;
signed char var_19 = (signed char)-20;
unsigned short var_20 = (unsigned short)60490;
unsigned long long int var_21 = 7858097166699052676ULL;
unsigned long long int var_22 = 14714314299308948470ULL;
short var_23 = (short)21280;
signed char var_24 = (signed char)-52;
int var_25 = 778788876;
short var_26 = (short)22666;
signed char var_27 = (signed char)105;
unsigned long long int var_28 = 4785421698016736996ULL;
short var_29 = (short)-11749;
int var_30 = 1241558106;
short var_31 = (short)28134;
signed char var_32 = (signed char)-87;
unsigned short var_33 = (unsigned short)17431;
signed char var_34 = (signed char)103;
short var_35 = (short)-10949;
int var_36 = 1980460013;
signed char var_37 = (signed char)80;
unsigned int var_38 = 1194286530U;
unsigned int var_39 = 3883859067U;
unsigned long long int var_40 = 4734914913970743618ULL;
unsigned int arr_2 [14] ;
signed char arr_6 [24] [24] ;
unsigned long long int arr_9 [24] ;
signed char arr_10 [24] [24] ;
unsigned short arr_23 [15] ;
short arr_28 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2261447869U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 2335900608448419676ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)57631;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = (short)3671;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
