#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5396947949911038105LL;
int var_1 = -98517975;
long long int var_10 = -5507384813884876605LL;
unsigned char var_13 = (unsigned char)172;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-41;
int zero = 0;
int var_18 = -1642733434;
unsigned short var_19 = (unsigned short)31899;
_Bool var_20 = (_Bool)0;
int var_21 = -1632911820;
short arr_1 [23] [23] ;
long long int arr_3 [23] ;
unsigned long long int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4552959347778985380LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 11606212867379388364ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
