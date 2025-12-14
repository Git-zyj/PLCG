#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51469;
unsigned int var_2 = 3374750018U;
int var_3 = 1417488809;
unsigned short var_4 = (unsigned short)6179;
long long int var_6 = -7906101983548008544LL;
short var_7 = (short)-3306;
unsigned long long int var_8 = 6856996534326341258ULL;
unsigned short var_9 = (unsigned short)30403;
long long int var_14 = 3214085804485339696LL;
int zero = 0;
unsigned long long int var_15 = 18157295226280632333ULL;
long long int var_16 = 3865651524814112875LL;
long long int var_17 = 8658686790112107334LL;
short var_18 = (short)-14064;
unsigned long long int var_19 = 12715576891701180230ULL;
unsigned long long int var_20 = 7331416357215734193ULL;
long long int var_21 = 8917611445628365823LL;
unsigned long long int var_22 = 6183980721641158385ULL;
short var_23 = (short)17310;
unsigned short var_24 = (unsigned short)50147;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
int var_27 = -2027321026;
int var_28 = -919590795;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)112;
unsigned long long int var_31 = 8791196783459754265ULL;
signed char var_32 = (signed char)125;
unsigned short var_33 = (unsigned short)16048;
unsigned int var_34 = 2165612144U;
long long int arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
signed char arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
_Bool arr_6 [11] [11] [11] ;
long long int arr_11 [11] [11] ;
unsigned char arr_12 [11] [11] ;
signed char arr_15 [11] [11] [11] ;
unsigned int arr_20 [11] [11] [11] [11] [11] [11] [11] ;
int arr_26 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_4 [11] [11] ;
short arr_28 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 6020125670824712832LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)36774;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 5012873284934632034ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = -4842955640830807017LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 673605435U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -835768735;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3089285311U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)15269;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
