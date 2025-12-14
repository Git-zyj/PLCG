#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -220898891478251686LL;
unsigned long long int var_1 = 10826909207825541588ULL;
short var_2 = (short)5697;
unsigned long long int var_3 = 14003153196534030112ULL;
unsigned long long int var_4 = 12749532584871883831ULL;
unsigned int var_5 = 1129976026U;
unsigned int var_6 = 3005409426U;
int var_7 = -709086867;
long long int var_9 = 4715065609800612235LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 4329959338046872690LL;
long long int var_12 = 8933902174379479751LL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9406897625580474405ULL;
unsigned int var_17 = 3667972507U;
unsigned long long int var_18 = 7792020669853942107ULL;
signed char var_19 = (signed char)4;
int zero = 0;
signed char var_20 = (signed char)-69;
long long int var_21 = -4633190440061453372LL;
long long int var_22 = -5718703732151546757LL;
int var_23 = -1041440891;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1894102046U;
long long int arr_2 [16] [16] ;
_Bool arr_3 [16] [16] ;
signed char arr_4 [16] ;
unsigned int arr_5 [16] [16] [16] ;
short arr_6 [16] [16] ;
_Bool arr_7 [16] [16] ;
unsigned int arr_8 [16] [16] [16] ;
_Bool arr_9 [16] ;
long long int arr_10 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 5863177722283996678LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3747199147U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18863;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3271881336U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -953253645526989668LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
