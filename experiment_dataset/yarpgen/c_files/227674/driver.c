#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16929510613320353164ULL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-36;
_Bool var_6 = (_Bool)1;
long long int var_7 = 3992010441431112004LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1517225632;
long long int var_11 = 3755499585851793789LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -8616846794621394619LL;
long long int var_14 = -4574265755871784634LL;
unsigned short arr_1 [24] [24] ;
int arr_2 [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33265;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1209623940 : -1681909534;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37414 : (unsigned short)48659;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
