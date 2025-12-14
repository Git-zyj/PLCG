#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 7295695956643108672LL;
signed char var_9 = (signed char)112;
unsigned int var_11 = 142724388U;
unsigned char var_12 = (unsigned char)90;
unsigned int var_13 = 138935020U;
int zero = 0;
unsigned short var_14 = (unsigned short)46823;
int var_15 = -910631788;
unsigned short var_16 = (unsigned short)32633;
short var_17 = (short)29526;
unsigned long long int var_18 = 9284084710450813660ULL;
long long int var_19 = -3220375449744478498LL;
unsigned short var_20 = (unsigned short)44657;
_Bool arr_0 [12] ;
unsigned short arr_1 [12] ;
_Bool arr_2 [12] ;
unsigned int arr_3 [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)20318;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 694679727U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14936997666751184716ULL : 7377964759967675689ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
