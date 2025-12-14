#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1698843223328170677LL;
long long int var_2 = -8106823579395153921LL;
short var_4 = (short)-5326;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3994595226U;
short var_8 = (short)7603;
long long int var_15 = 3909017569293695464LL;
int zero = 0;
int var_16 = 40609834;
short var_17 = (short)8507;
unsigned short var_18 = (unsigned short)47364;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-5;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
long long int var_23 = 5401262322996855595LL;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)6;
unsigned long long int var_26 = 8717817562755855171ULL;
unsigned short arr_1 [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
_Bool arr_8 [21] [21] ;
long long int arr_16 [21] [21] ;
unsigned long long int arr_17 [21] ;
short arr_19 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)24250;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)45875;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 8511552247013492859LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 18183634242034864001ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)11299;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
