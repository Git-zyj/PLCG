#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 170472738;
signed char var_5 = (signed char)-45;
unsigned long long int var_6 = 1730412607505433868ULL;
long long int var_11 = -6880396716842283374LL;
long long int var_13 = -6362038088082710684LL;
unsigned long long int var_16 = 18035023741414744856ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-68;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9958357664262411633ULL;
short var_23 = (short)-19535;
unsigned long long int var_24 = 10647642263998545726ULL;
_Bool arr_0 [16] ;
short arr_1 [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
_Bool arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-8984;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7991778780058205729ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
