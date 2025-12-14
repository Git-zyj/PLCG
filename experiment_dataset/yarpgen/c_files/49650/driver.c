#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23829;
long long int var_2 = 8795245929415138572LL;
unsigned long long int var_3 = 5110037204777431240ULL;
unsigned long long int var_4 = 2760918603380949315ULL;
unsigned char var_6 = (unsigned char)89;
int var_7 = 1313614252;
unsigned int var_9 = 1284372745U;
unsigned char var_10 = (unsigned char)155;
signed char var_12 = (signed char)-94;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_18 = (signed char)-14;
int zero = 0;
int var_19 = -69204286;
long long int var_20 = -311609877461381102LL;
short var_21 = (short)18814;
unsigned int var_22 = 4089537465U;
_Bool var_23 = (_Bool)0;
long long int var_24 = -3939667319287281462LL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)244;
_Bool var_27 = (_Bool)0;
short var_28 = (short)2377;
unsigned int var_29 = 886122227U;
_Bool var_30 = (_Bool)0;
int var_31 = -1462143039;
signed char var_32 = (signed char)-63;
unsigned int var_33 = 3236009664U;
unsigned char var_34 = (unsigned char)66;
unsigned long long int arr_0 [10] [10] ;
long long int arr_1 [10] ;
long long int arr_2 [10] [10] ;
unsigned long long int arr_3 [10] ;
unsigned int arr_4 [10] [10] [10] [10] ;
int arr_6 [10] [10] [10] [10] ;
_Bool arr_7 [10] [10] [10] [10] ;
unsigned long long int arr_9 [10] ;
short arr_10 [10] [10] [10] ;
short arr_13 [10] [10] ;
long long int arr_19 [17] [17] ;
unsigned char arr_21 [17] ;
unsigned int arr_22 [17] ;
unsigned char arr_27 [21] [21] ;
unsigned int arr_28 [21] [21] [21] ;
unsigned char arr_17 [10] ;
_Bool arr_18 [10] ;
signed char arr_23 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 6133404320558901080ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -2193860982256390508LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 8291044622654026628LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 14115901065426447196ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 3442446657U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1431910110;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 4924493644657196120ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)19190;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (short)23000;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = 7648421176301906099LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = 2409814040U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 2240143930U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (signed char)63;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
