#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
short var_3 = (short)1668;
unsigned long long int var_4 = 856686864077144947ULL;
long long int var_6 = -7326061157404266185LL;
_Bool var_9 = (_Bool)0;
long long int var_11 = 2617505887218924538LL;
unsigned char var_16 = (unsigned char)254;
int var_17 = 988185571;
unsigned short var_18 = (unsigned short)17666;
int zero = 0;
unsigned char var_19 = (unsigned char)8;
unsigned short var_20 = (unsigned short)5578;
unsigned short var_21 = (unsigned short)61735;
unsigned int var_22 = 857805940U;
unsigned long long int var_23 = 8755885879229745431ULL;
signed char var_24 = (signed char)-58;
unsigned long long int var_25 = 10686496757279093395ULL;
unsigned short var_26 = (unsigned short)47076;
unsigned char arr_0 [23] [23] ;
signed char arr_1 [23] [23] ;
long long int arr_2 [23] [23] ;
short arr_3 [11] [11] ;
unsigned char arr_4 [11] ;
unsigned long long int arr_10 [11] [11] ;
unsigned long long int arr_6 [11] ;
unsigned long long int arr_14 [11] [11] [11] [11] ;
unsigned long long int arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 5907951978909354015LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-9523;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 783728396801363023ULL : 8364874702213851226ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 10907175860290590914ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 18322408774909397356ULL : 166857411355012539ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4671978684462929680ULL : 16903705169149085543ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
