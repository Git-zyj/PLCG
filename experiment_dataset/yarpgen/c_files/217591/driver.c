#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)234;
_Bool var_5 = (_Bool)0;
unsigned short var_10 = (unsigned short)2142;
unsigned long long int var_13 = 11622522077411568280ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)2;
long long int var_17 = 2504836779429184626LL;
signed char var_18 = (signed char)73;
signed char var_19 = (signed char)34;
long long int var_20 = -4251902060985438897LL;
unsigned short var_21 = (unsigned short)41236;
unsigned long long int var_22 = 11063039708386315646ULL;
signed char var_23 = (signed char)-23;
long long int var_24 = -952119899734441200LL;
unsigned long long int arr_0 [25] [25] ;
long long int arr_1 [25] ;
short arr_6 [25] ;
unsigned int arr_8 [25] [25] ;
_Bool arr_10 [25] [25] ;
signed char arr_11 [25] [25] [25] [25] ;
long long int arr_12 [25] ;
signed char arr_16 [25] [25] ;
_Bool arr_17 [25] [25] [25] [25] ;
unsigned char arr_20 [25] [25] [25] [25] [25] ;
signed char arr_2 [25] ;
unsigned char arr_3 [25] ;
unsigned long long int arr_4 [25] ;
unsigned long long int arr_14 [25] ;
unsigned short arr_15 [25] [25] [25] ;
signed char arr_23 [25] ;
short arr_24 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 6915602729054320490ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -581509024215055242LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-19010;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 3222567719U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)60 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 6495083389017233718LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 4170174564130363438ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 13885360529177956070ULL : 14863792987383437487ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)57826 : (unsigned short)20736;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (short)-20749;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
