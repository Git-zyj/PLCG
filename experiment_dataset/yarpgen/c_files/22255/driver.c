#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17854;
signed char var_2 = (signed char)91;
signed char var_4 = (signed char)31;
signed char var_9 = (signed char)37;
unsigned long long int var_11 = 7688476518891120252ULL;
int var_12 = 348044883;
signed char var_14 = (signed char)39;
unsigned int var_17 = 2706051347U;
unsigned long long int var_18 = 13440515954259993108ULL;
int zero = 0;
long long int var_20 = -7638766963118868890LL;
long long int var_21 = -4833994533116112495LL;
unsigned long long int var_22 = 1957311815865084281ULL;
short var_23 = (short)19344;
int var_24 = 441235593;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)90;
unsigned int var_27 = 3831792841U;
signed char var_28 = (signed char)112;
signed char var_29 = (signed char)102;
signed char var_30 = (signed char)-53;
unsigned long long int var_31 = 1279713026345458796ULL;
unsigned int arr_0 [11] [11] ;
signed char arr_3 [11] ;
long long int arr_4 [11] [11] ;
unsigned long long int arr_6 [11] ;
int arr_7 [11] [11] ;
_Bool arr_10 [11] [11] [11] ;
unsigned long long int arr_16 [11] [11] [11] [11] ;
short arr_20 [11] [11] ;
signed char arr_17 [11] [11] [11] ;
short arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 3814551884U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1007809662076349895LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 5755684433033100330ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 38932554;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 6587842044947075448ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (short)2959;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)43 : (signed char)9;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (short)-21883;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
