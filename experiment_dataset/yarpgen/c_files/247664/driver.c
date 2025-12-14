#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
short var_1 = (short)7823;
unsigned int var_3 = 1901728503U;
unsigned char var_4 = (unsigned char)152;
unsigned long long int var_5 = 11092386405336040390ULL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-1510;
unsigned int var_10 = 3910767109U;
int zero = 0;
signed char var_12 = (signed char)29;
short var_13 = (short)15051;
short var_14 = (short)2782;
unsigned char var_15 = (unsigned char)73;
int var_16 = -1789517579;
long long int var_17 = 1012924445894888556LL;
unsigned int var_18 = 4072396616U;
int var_19 = 1186582214;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1339892562U;
int var_22 = 584929978;
unsigned char var_23 = (unsigned char)219;
unsigned char var_24 = (unsigned char)202;
long long int var_25 = 579141244474458508LL;
unsigned long long int var_26 = 6987200291824986878ULL;
int arr_0 [22] [22] ;
long long int arr_1 [22] [22] ;
short arr_2 [22] ;
_Bool arr_3 [22] ;
_Bool arr_5 [22] ;
_Bool arr_10 [22] ;
signed char arr_14 [22] ;
unsigned int arr_8 [22] [22] ;
unsigned int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -473716235;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1788204377961911229LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)10358;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 520673801U : 1020538107U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 2788439259U : 794887546U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
