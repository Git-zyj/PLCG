#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7780942982851845682LL;
signed char var_2 = (signed char)(-127 - 1);
unsigned long long int var_7 = 2725746301045921058ULL;
long long int var_9 = -732152733767084138LL;
unsigned int var_10 = 948943038U;
long long int var_16 = 9098340487513782128LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)3118;
long long int var_19 = 1310557774493528286LL;
unsigned int var_20 = 1238716792U;
long long int var_21 = 6004493783127787255LL;
unsigned int var_22 = 2594514245U;
long long int var_23 = 4281618917660843582LL;
short var_24 = (short)-24006;
signed char arr_0 [25] ;
unsigned char arr_1 [25] ;
signed char arr_3 [24] ;
unsigned long long int arr_4 [24] [24] ;
unsigned char arr_5 [24] ;
signed char arr_10 [13] [13] [13] ;
signed char arr_2 [25] ;
signed char arr_12 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 14272761258953223163ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)2;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
