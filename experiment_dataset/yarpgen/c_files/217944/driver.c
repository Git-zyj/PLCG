#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23443;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-110;
long long int var_9 = 8909586033817957771LL;
int zero = 0;
short var_11 = (short)-19057;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 924180464U;
short var_14 = (short)-24893;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)74;
unsigned long long int var_17 = 8243612287441806753ULL;
unsigned short var_18 = (unsigned short)60138;
unsigned short var_19 = (unsigned short)64657;
signed char var_20 = (signed char)-58;
unsigned short var_21 = (unsigned short)13798;
unsigned long long int arr_1 [24] [24] ;
int arr_3 [24] [24] ;
unsigned long long int arr_4 [24] ;
int arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 10352882549822288749ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -757097219;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 13704497305545568786ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 2118303283;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
