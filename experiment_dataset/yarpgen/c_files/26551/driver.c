#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7476802059894890711LL;
unsigned int var_1 = 3051170021U;
unsigned long long int var_4 = 3126019086618978484ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-79;
unsigned int var_7 = 2186872033U;
int var_10 = 2137120766;
int var_12 = 1403213244;
int var_13 = 1246312669;
int zero = 0;
int var_14 = -1092268887;
long long int var_15 = -7582500225885426116LL;
unsigned int var_16 = 2348187817U;
int var_17 = 979252842;
int var_18 = -1567394168;
signed char var_19 = (signed char)-33;
unsigned int var_20 = 1502210983U;
unsigned int var_21 = 1005304934U;
signed char var_22 = (signed char)-62;
short var_23 = (short)-14200;
int var_24 = -832677555;
_Bool var_25 = (_Bool)1;
long long int var_26 = -3334024930815419334LL;
signed char var_27 = (signed char)105;
unsigned short var_28 = (unsigned short)19834;
unsigned short var_29 = (unsigned short)28889;
long long int var_30 = 8784935277687645606LL;
long long int var_31 = -7740215437129197808LL;
unsigned short var_32 = (unsigned short)44238;
unsigned long long int var_33 = 1602606326152302167ULL;
short var_34 = (short)24040;
int arr_0 [17] ;
signed char arr_2 [17] [17] ;
long long int arr_3 [17] [17] [17] ;
unsigned short arr_4 [17] ;
unsigned long long int arr_7 [17] ;
_Bool arr_8 [17] [17] [17] ;
unsigned char arr_9 [17] ;
_Bool arr_10 [17] [17] [17] ;
short arr_12 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_13 [17] [17] ;
long long int arr_14 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_18 [17] [17] ;
signed char arr_22 [17] ;
long long int arr_24 [17] [17] ;
unsigned long long int arr_25 [14] [14] ;
unsigned char arr_16 [17] [17] [17] [17] ;
unsigned int arr_27 [14] [14] ;
unsigned int arr_30 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1681581072;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6039431340792701774LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)40890;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 16643209389330191283ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)-22059 : (short)9280;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 9216750790449121032ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8234010950807248250LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 14535462585557975370ULL : 16715375624402986853ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = 1517642420515626505LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = 6674745666367884867ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? 2285060225U : 1694576509U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = 3418492799U;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
