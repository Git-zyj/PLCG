#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6739929963521785947LL;
unsigned long long int var_1 = 4576738051312687940ULL;
int var_2 = 1857242443;
unsigned char var_3 = (unsigned char)5;
unsigned char var_5 = (unsigned char)253;
unsigned char var_6 = (unsigned char)35;
unsigned char var_7 = (unsigned char)97;
signed char var_8 = (signed char)-67;
unsigned short var_9 = (unsigned short)31893;
unsigned short var_10 = (unsigned short)49712;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 14537865270888416225ULL;
int var_13 = -84323391;
int var_14 = 1408881591;
long long int var_15 = 8329392580976114843LL;
unsigned char var_16 = (unsigned char)113;
unsigned short var_17 = (unsigned short)47197;
int var_18 = 615567307;
unsigned int var_19 = 3144685103U;
signed char var_20 = (signed char)67;
long long int var_21 = 7672376561599062489LL;
unsigned char var_22 = (unsigned char)99;
unsigned char var_23 = (unsigned char)149;
int var_24 = 1788798110;
unsigned long long int var_25 = 10424190185697435352ULL;
long long int var_26 = -3332032518980358954LL;
long long int arr_0 [15] ;
signed char arr_2 [15] [15] ;
unsigned short arr_3 [15] [15] ;
_Bool arr_4 [15] ;
unsigned short arr_5 [15] ;
int arr_7 [15] ;
unsigned int arr_8 [15] [15] ;
_Bool arr_14 [15] [15] [15] ;
int arr_18 [15] [15] [15] [15] [15] ;
int arr_6 [15] ;
unsigned int arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 6596948770854605113LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)15796;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)52331;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 616664165;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 2329407770U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -891985881;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -593148104;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 96711290U;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
