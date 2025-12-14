#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned int var_1 = 3372162264U;
unsigned char var_2 = (unsigned char)33;
unsigned long long int var_4 = 4619929250160377081ULL;
unsigned int var_5 = 1307987914U;
unsigned int var_6 = 2009843507U;
signed char var_8 = (signed char)-120;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 446014590U;
unsigned long long int var_12 = 6107992192206318980ULL;
unsigned int var_13 = 3790976187U;
unsigned int var_15 = 2605792735U;
int zero = 0;
short var_16 = (short)31056;
signed char var_17 = (signed char)123;
unsigned short var_18 = (unsigned short)12816;
unsigned int var_19 = 3898587331U;
unsigned int var_20 = 195874088U;
unsigned int var_21 = 210177635U;
short var_22 = (short)19145;
signed char var_23 = (signed char)11;
int arr_0 [10] [10] ;
int arr_1 [10] [10] ;
int arr_3 [10] ;
unsigned int arr_4 [10] [10] ;
unsigned short arr_5 [10] [10] [10] ;
unsigned short arr_7 [10] [10] [10] [10] ;
unsigned int arr_9 [10] [10] ;
unsigned int arr_12 [12] ;
unsigned long long int arr_14 [12] ;
unsigned char arr_10 [10] ;
unsigned long long int arr_11 [10] ;
unsigned long long int arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1257396193;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1586017569;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1673615728;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 2198102847U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)57205;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15306;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 782227152U : 980052483U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 989320149U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 5766238583345981473ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 17722500056966694070ULL : 13086644198840474619ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 1597657063568989058ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
