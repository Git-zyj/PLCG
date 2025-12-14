#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14018;
signed char var_2 = (signed char)-63;
unsigned char var_4 = (unsigned char)89;
long long int var_6 = 1094776583048733945LL;
unsigned long long int var_8 = 10332268535853877869ULL;
unsigned int var_9 = 3369639722U;
unsigned short var_10 = (unsigned short)45534;
int zero = 0;
unsigned short var_14 = (unsigned short)57508;
unsigned long long int var_15 = 11381235030973689386ULL;
long long int var_16 = 7880778141641491836LL;
unsigned int var_17 = 1027467354U;
int var_18 = 759334012;
signed char var_19 = (signed char)-120;
unsigned long long int var_20 = 17224042283816768506ULL;
unsigned int var_21 = 3063770194U;
unsigned short var_22 = (unsigned short)8227;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)35660;
long long int var_26 = -3646353164708411138LL;
short var_27 = (short)13214;
unsigned char var_28 = (unsigned char)100;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-86;
unsigned short var_31 = (unsigned short)48342;
long long int var_32 = 6014324229877421945LL;
_Bool arr_0 [18] [18] ;
unsigned char arr_3 [18] ;
unsigned int arr_4 [17] [17] ;
long long int arr_5 [17] ;
unsigned long long int arr_8 [17] [17] [17] ;
unsigned char arr_18 [20] [20] ;
signed char arr_19 [20] ;
_Bool arr_22 [24] ;
long long int arr_24 [24] [24] ;
long long int arr_10 [17] [17] [17] [17] ;
long long int arr_15 [13] [13] ;
signed char arr_16 [13] ;
unsigned char arr_17 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3774285712U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -3243370212604513036LL : 6153355937433993881LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4403182017183939512ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = 1831964080621365908LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -5056604499524052342LL : -7073632668231243395LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 799593749328058527LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)211;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
