#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1477947557U;
long long int var_2 = -6509493940235519539LL;
signed char var_3 = (signed char)40;
long long int var_4 = 2634073592583554810LL;
long long int var_6 = -7487735100564276052LL;
long long int var_7 = -1854428287500016986LL;
long long int var_8 = 7004325254711245848LL;
unsigned int var_9 = 2151035178U;
signed char var_10 = (signed char)-79;
signed char var_12 = (signed char)-17;
long long int var_13 = 7338339745452019810LL;
int zero = 0;
unsigned long long int var_14 = 5704458610930759570ULL;
long long int var_15 = -8413600461800193038LL;
unsigned long long int var_16 = 6800630437821880832ULL;
unsigned long long int var_17 = 9593442780078890589ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5230143810542712601ULL;
long long int arr_0 [10] ;
_Bool arr_1 [10] ;
_Bool arr_7 [21] ;
unsigned int arr_8 [21] [21] ;
long long int arr_10 [21] [21] [21] ;
_Bool arr_12 [21] [21] [21] [21] ;
unsigned int arr_13 [21] [21] [21] ;
unsigned int arr_2 [10] ;
signed char arr_9 [21] ;
unsigned long long int arr_16 [21] [21] ;
signed char arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -553816496161197365LL : -9164376051352192823LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 3651355930U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -997807409664297142LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 158749563U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1891521267U : 1560568146U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 2466170160857827597ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (signed char)79;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
