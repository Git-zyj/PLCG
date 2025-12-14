#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23203;
long long int var_4 = 9106209842651190549LL;
signed char var_10 = (signed char)2;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-49;
signed char var_14 = (signed char)-112;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2046121829173996766ULL;
unsigned long long int var_19 = 3298017279613021880ULL;
short var_20 = (short)20929;
signed char var_21 = (signed char)124;
unsigned long long int var_22 = 2436860594361558451ULL;
signed char var_23 = (signed char)50;
short var_24 = (short)-13890;
short arr_0 [13] [13] ;
_Bool arr_1 [13] [13] ;
short arr_3 [17] [17] ;
long long int arr_4 [17] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-6109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)9272;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4674243390105200458LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)23067;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
