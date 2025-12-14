#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33013;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-88;
_Bool var_8 = (_Bool)0;
long long int var_9 = 423670421470177892LL;
unsigned short var_11 = (unsigned short)37585;
_Bool var_12 = (_Bool)1;
long long int var_13 = -9036039186111449129LL;
unsigned char var_14 = (unsigned char)243;
int zero = 0;
long long int var_15 = 7085617492169160960LL;
unsigned char var_16 = (unsigned char)4;
unsigned int var_17 = 1512535888U;
unsigned long long int var_18 = 11551793212701491215ULL;
unsigned char var_19 = (unsigned char)141;
unsigned short var_20 = (unsigned short)56761;
short var_21 = (short)-29672;
long long int var_22 = -7838449004480991755LL;
short var_23 = (short)26914;
unsigned int var_24 = 640006210U;
_Bool var_25 = (_Bool)1;
long long int var_26 = 7572883131279809391LL;
unsigned short var_27 = (unsigned short)27542;
unsigned long long int var_28 = 11703205248779361509ULL;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-27198;
int var_31 = -2039034484;
_Bool arr_1 [11] [11] ;
long long int arr_2 [11] ;
unsigned short arr_3 [17] ;
long long int arr_7 [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] ;
unsigned int arr_13 [17] [17] [17] ;
int arr_14 [22] ;
unsigned long long int arr_15 [22] ;
_Bool arr_18 [18] ;
int arr_19 [18] ;
unsigned long long int arr_20 [18] ;
unsigned int arr_10 [17] ;
unsigned int arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -8849602427461584391LL : -963833230512357308LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)50942;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3844068241230200869LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2888087061291424178ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3811231000U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 2137822730;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4188988102003310227ULL : 15471989300721894402ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 2083732004;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 17201059784778278219ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 3807558068U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1346437039U : 281933954U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
