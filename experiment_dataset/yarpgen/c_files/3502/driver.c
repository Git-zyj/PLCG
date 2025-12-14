#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46365;
short var_1 = (short)22696;
unsigned long long int var_3 = 3230049065668579277ULL;
unsigned long long int var_6 = 1150478013434344688ULL;
unsigned long long int var_11 = 1973556912431742948ULL;
unsigned long long int var_12 = 15256059022006633246ULL;
signed char var_13 = (signed char)95;
signed char var_14 = (signed char)100;
unsigned short var_15 = (unsigned short)2269;
signed char var_17 = (signed char)93;
int var_18 = -467745363;
unsigned long long int var_19 = 12517201147709143322ULL;
int zero = 0;
unsigned long long int var_20 = 5599197772854812915ULL;
short var_21 = (short)29583;
unsigned char var_22 = (unsigned char)192;
long long int var_23 = 1430280479038068825LL;
signed char var_24 = (signed char)-41;
unsigned long long int var_25 = 9067089911032697443ULL;
signed char var_26 = (signed char)98;
unsigned int arr_0 [24] ;
signed char arr_1 [24] [24] ;
_Bool arr_2 [24] [24] ;
unsigned int arr_9 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1774443184U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 951920761U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
