#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -561878184;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -2823617961130524134LL;
unsigned long long int var_5 = 11227963370420357422ULL;
unsigned int var_7 = 960674338U;
int var_9 = -1019045653;
unsigned long long int var_10 = 2952387592581110990ULL;
unsigned int var_11 = 2013714436U;
unsigned int var_12 = 294567096U;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
unsigned short var_14 = (unsigned short)49029;
int var_15 = -1310274812;
long long int var_16 = 5092911828016064312LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-47;
short var_19 = (short)-6849;
unsigned short var_20 = (unsigned short)60700;
long long int var_21 = 3147975793213512711LL;
short var_22 = (short)30624;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] ;
long long int arr_2 [22] ;
unsigned char arr_3 [22] ;
unsigned int arr_4 [22] ;
unsigned short arr_9 [22] ;
int arr_10 [22] [22] ;
int arr_11 [22] ;
unsigned int arr_5 [22] ;
long long int arr_6 [22] [22] ;
int arr_7 [22] ;
short arr_13 [22] [22] ;
long long int arr_14 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)14057;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -104453284423671461LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 4035977532U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned short)39953;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 965621264;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 1058478903;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 2850840672U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 5602245034066473916LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 716852510;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11738 : (short)-7857;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -442013772168790789LL : 6911711133779307835LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
