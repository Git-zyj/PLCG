#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
signed char var_2 = (signed char)-57;
unsigned char var_3 = (unsigned char)170;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2047078989U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)163;
signed char var_12 = (signed char)87;
long long int var_13 = 8599179616473262494LL;
long long int var_14 = 4523410886931491286LL;
unsigned short var_16 = (unsigned short)19270;
int zero = 0;
unsigned char var_17 = (unsigned char)198;
long long int var_18 = -2162907715152946886LL;
signed char var_19 = (signed char)-90;
unsigned char var_20 = (unsigned char)174;
unsigned int var_21 = 2462737933U;
int var_22 = 1819167957;
unsigned short var_23 = (unsigned short)36415;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-79;
short var_26 = (short)20638;
int var_27 = 1387968380;
unsigned long long int var_28 = 17843153998344693345ULL;
short var_29 = (short)11788;
int var_30 = 2100766731;
signed char var_31 = (signed char)-71;
short var_32 = (short)-22198;
short var_33 = (short)-31700;
long long int var_34 = 896756666235825184LL;
signed char var_35 = (signed char)-114;
signed char var_36 = (signed char)102;
_Bool var_37 = (_Bool)0;
unsigned long long int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
long long int arr_5 [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] [24] ;
unsigned int arr_13 [24] [24] [24] [24] ;
short arr_15 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_16 [24] [24] [24] [24] [24] ;
unsigned int arr_21 [24] [24] [24] [24] ;
unsigned char arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 687395695009608584ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 14600230543009660040ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 6634173681103216810LL : 6557775583196249441LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 16913863430071312607ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 4173521517U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)16605 : (short)8854;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 12960254413045132159ULL : 13944377453197765304ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 87497329U : 3649812897U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)132;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
