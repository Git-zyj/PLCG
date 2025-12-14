#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61699;
unsigned short var_1 = (unsigned short)33569;
short var_2 = (short)30319;
unsigned char var_8 = (unsigned char)46;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2610149082U;
unsigned long long int var_11 = 8854099154484614408ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)16098;
unsigned long long int var_18 = 2822338479972780505ULL;
int zero = 0;
long long int var_19 = 8886445324564018533LL;
short var_20 = (short)25764;
long long int var_21 = 7389221965683531814LL;
unsigned long long int var_22 = 5168811380694228202ULL;
_Bool var_23 = (_Bool)0;
unsigned short arr_5 [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)61074;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 14471463406136017726ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
