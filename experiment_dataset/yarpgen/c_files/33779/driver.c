#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2126792239;
unsigned int var_2 = 1587409263U;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)59856;
unsigned long long int var_8 = 9943086646768903519ULL;
long long int var_9 = -4528126587013188931LL;
int zero = 0;
unsigned int var_11 = 4282457368U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 5090446443441753954LL;
signed char var_14 = (signed char)122;
long long int var_15 = 6182297476472382488LL;
unsigned long long int var_16 = 6171476372441598373ULL;
unsigned long long int var_17 = 5696870481715875893ULL;
unsigned int var_18 = 2178905834U;
unsigned short var_19 = (unsigned short)59982;
unsigned short arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)29680;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)49712;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)24062;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 6653530841145514589ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
