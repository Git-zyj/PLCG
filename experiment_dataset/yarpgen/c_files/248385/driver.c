#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
unsigned int var_1 = 322583411U;
long long int var_2 = -5827477922992810112LL;
signed char var_3 = (signed char)-126;
long long int var_5 = -5602573961249305299LL;
unsigned long long int var_6 = 13943884143365216548ULL;
short var_7 = (short)-1054;
long long int var_8 = -7014547786543016672LL;
unsigned long long int var_9 = 15644585934299910049ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)87;
short var_11 = (short)16771;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17895519223423530087ULL;
unsigned int var_14 = 3902572434U;
short var_15 = (short)29133;
unsigned char var_16 = (unsigned char)11;
unsigned int var_17 = 2939900083U;
unsigned char var_18 = (unsigned char)232;
unsigned char var_19 = (unsigned char)56;
unsigned char var_20 = (unsigned char)142;
unsigned short arr_8 [13] [13] [13] [13] ;
short arr_11 [13] ;
unsigned int arr_23 [22] ;
unsigned char arr_24 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46424;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)31889;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 3029497499U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (unsigned char)46;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
