#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5225;
unsigned char var_4 = (unsigned char)45;
signed char var_5 = (signed char)-57;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)34;
short var_12 = (short)26506;
unsigned char var_13 = (unsigned char)240;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7458927107885702069LL;
unsigned long long int var_18 = 6720931309951567542ULL;
unsigned long long int var_19 = 15440549242518144643ULL;
long long int arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_2 [23] ;
signed char arr_4 [23] ;
_Bool arr_6 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1651567789968387969LL : -8088379813897547572LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6015173523607504347ULL : 1868091158905861055ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 14441081924574852704ULL : 17996369670686854761ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
