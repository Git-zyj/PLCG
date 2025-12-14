#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3078;
short var_1 = (short)13914;
unsigned char var_2 = (unsigned char)195;
long long int var_3 = -9024155740637916542LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)26;
signed char var_6 = (signed char)-27;
signed char var_7 = (signed char)92;
short var_8 = (short)29338;
unsigned char var_9 = (unsigned char)33;
int zero = 0;
signed char var_10 = (signed char)48;
long long int var_11 = 5166599397413511065LL;
unsigned char var_12 = (unsigned char)34;
signed char var_13 = (signed char)-45;
unsigned short var_14 = (unsigned short)13340;
short var_15 = (short)9708;
unsigned char var_16 = (unsigned char)147;
unsigned long long int var_17 = 9199898679585179093ULL;
short var_18 = (short)29721;
int var_19 = 1485446577;
unsigned long long int var_20 = 4107409931255128285ULL;
unsigned char arr_1 [24] [24] ;
long long int arr_2 [24] ;
signed char arr_4 [25] ;
unsigned long long int arr_5 [25] ;
unsigned char arr_6 [25] [25] ;
long long int arr_9 [16] [16] ;
unsigned long long int arr_10 [16] [16] ;
unsigned char arr_12 [16] ;
unsigned int arr_14 [16] [16] ;
unsigned char arr_3 [24] ;
unsigned long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 8303318326572450454LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 17552370441163286198ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = -2325045948344548595LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 7262267971205821358ULL : 10824726857420777597ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 2932587874U : 1472881960U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 10968579116333348131ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
