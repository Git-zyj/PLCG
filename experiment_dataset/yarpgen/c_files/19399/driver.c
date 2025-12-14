#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11569224423028097545ULL;
signed char var_2 = (signed char)-110;
short var_4 = (short)-8356;
unsigned int var_5 = 1634539304U;
long long int var_8 = -5155492977753015909LL;
signed char var_9 = (signed char)57;
long long int var_11 = -5787281500917989801LL;
signed char var_13 = (signed char)-64;
int zero = 0;
unsigned short var_16 = (unsigned short)52830;
short var_17 = (short)17825;
long long int var_18 = 8049343211379937524LL;
int var_19 = 435858448;
long long int var_20 = 7318926112496852180LL;
signed char arr_0 [20] ;
signed char arr_2 [20] ;
_Bool arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
