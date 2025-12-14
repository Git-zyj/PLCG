#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1856775699U;
short var_3 = (short)-30496;
long long int var_4 = 3582475269799396997LL;
unsigned int var_5 = 3875307124U;
unsigned short var_9 = (unsigned short)41289;
unsigned short var_10 = (unsigned short)1282;
short var_11 = (short)-25238;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 1357255682U;
long long int var_16 = -5316445319984212444LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3387240930U;
long long int var_19 = 1171387510232478798LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)18177;
unsigned int var_22 = 1478241909U;
unsigned short var_23 = (unsigned short)4739;
unsigned short var_24 = (unsigned short)34742;
unsigned int var_25 = 2809212200U;
unsigned short var_26 = (unsigned short)41454;
short var_27 = (short)10047;
unsigned int var_28 = 3075189591U;
unsigned short var_29 = (unsigned short)34653;
unsigned int var_30 = 2025209634U;
long long int var_31 = -7403837697884682016LL;
unsigned int var_32 = 1579562786U;
short var_33 = (short)-25160;
long long int var_34 = -4964054178269433907LL;
unsigned int var_35 = 1627955597U;
unsigned int var_36 = 256935900U;
unsigned int var_37 = 2621959316U;
long long int var_38 = -850903159666289871LL;
unsigned short arr_3 [17] ;
short arr_4 [17] ;
long long int arr_5 [17] ;
_Bool arr_6 [17] [17] [17] ;
unsigned int arr_7 [17] [17] [17] ;
unsigned int arr_8 [17] ;
unsigned int arr_11 [17] [17] ;
unsigned int arr_14 [17] [17] [17] ;
_Bool arr_18 [17] [17] [17] [17] ;
short arr_25 [21] ;
_Bool arr_33 [21] ;
unsigned int arr_34 [21] [21] ;
unsigned int arr_39 [21] [21] [21] ;
short arr_2 [12] ;
unsigned int arr_9 [17] ;
_Bool arr_22 [17] [17] ;
unsigned int arr_32 [11] [11] [11] ;
long long int arr_36 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)7087;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-27894;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -8949512941083147356LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2981284132U : 926092971U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4066660614U : 3482120390U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 1368766315U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1459989084U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (short)30290;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_34 [i_0] [i_1] = 1652794700U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 2265844605U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-7965;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2512202901U : 3983145718U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3018512893U : 3487821528U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = -1532544910703027695LL;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
