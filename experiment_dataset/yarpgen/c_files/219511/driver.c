#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1478336090U;
short var_3 = (short)-16012;
unsigned short var_6 = (unsigned short)63489;
int var_8 = -243466660;
unsigned int var_10 = 3855393004U;
unsigned int var_14 = 3941822552U;
long long int var_15 = -4592124901599348125LL;
signed char var_16 = (signed char)33;
int zero = 0;
long long int var_18 = -1109972507376085141LL;
int var_19 = 823616808;
short var_20 = (short)-20387;
signed char var_21 = (signed char)-22;
signed char var_22 = (signed char)75;
unsigned char var_23 = (unsigned char)18;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)24;
signed char var_26 = (signed char)-28;
unsigned short var_27 = (unsigned short)48199;
_Bool var_28 = (_Bool)1;
long long int var_29 = -2771337251067292837LL;
short var_30 = (short)-21899;
signed char var_31 = (signed char)-31;
short arr_2 [17] [17] ;
unsigned short arr_4 [17] [17] ;
signed char arr_6 [17] ;
unsigned long long int arr_8 [17] ;
unsigned long long int arr_11 [17] [17] ;
unsigned int arr_12 [17] [17] ;
unsigned int arr_15 [17] [17] [17] [17] ;
signed char arr_3 [17] ;
short arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-184;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)16491;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1823971356748184560ULL : 13979720673295606701ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 15097320088936529014ULL : 16196392315081159441ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 1301117933U : 745711721U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2647036688U : 3350094549U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-15160;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
