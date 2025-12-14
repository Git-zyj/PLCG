#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7765;
short var_1 = (short)-12499;
int var_2 = 827861538;
long long int var_5 = 174098888670659965LL;
int var_7 = 497506139;
int var_8 = 529196470;
short var_9 = (short)-19171;
long long int var_10 = 3542533737674645493LL;
int zero = 0;
unsigned char var_11 = (unsigned char)121;
unsigned long long int var_12 = 2467619556027758381ULL;
unsigned char var_13 = (unsigned char)230;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2585116116U;
long long int arr_0 [21] ;
signed char arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned long long int arr_6 [12] ;
long long int arr_3 [21] [21] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -9155631532942100332LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 17618753570599681305ULL : 12217956260673863950ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -3275741426616494756LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)37359;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
