#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)127;
_Bool var_5 = (_Bool)1;
int var_6 = -113889787;
int var_7 = 331598010;
int var_8 = -212834375;
unsigned int var_9 = 1285496801U;
signed char var_10 = (signed char)-36;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7357083748499224105ULL;
unsigned long long int var_14 = 6483391214341579060ULL;
int var_15 = 156202349;
signed char var_16 = (signed char)-32;
signed char var_17 = (signed char)7;
int var_18 = 799507814;
unsigned long long int var_19 = 5708500743068853851ULL;
int var_20 = -1410323720;
unsigned long long int arr_0 [10] ;
_Bool arr_1 [10] ;
int arr_2 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 13768713348388513897ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -758491505;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
