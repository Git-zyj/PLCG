#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3032939466U;
unsigned int var_3 = 1176808842U;
short var_12 = (short)10920;
signed char var_13 = (signed char)55;
long long int var_14 = 2587446016728987022LL;
int zero = 0;
unsigned int var_20 = 1236011845U;
int var_21 = 1188013788;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-119;
long long int var_24 = -82530374678472293LL;
unsigned short var_25 = (unsigned short)59100;
unsigned short var_26 = (unsigned short)5034;
int var_27 = 345014119;
signed char var_28 = (signed char)110;
unsigned int var_29 = 3144982369U;
unsigned char var_30 = (unsigned char)202;
int var_31 = -1982474953;
signed char arr_0 [12] ;
short arr_1 [12] [12] ;
int arr_3 [17] ;
int arr_5 [17] [17] [17] ;
unsigned short arr_6 [17] [17] ;
unsigned int arr_8 [17] ;
unsigned int arr_11 [17] [17] [17] ;
unsigned int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19805;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 417145736;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -97248740 : 1154978136;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)56220;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1187299669U : 1922964039U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3698534645U : 2056774989U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 2373060354U : 4054369170U;
}

void checksum() {
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
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
