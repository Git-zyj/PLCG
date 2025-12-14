#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
unsigned int var_2 = 2346224848U;
signed char var_3 = (signed char)63;
signed char var_4 = (signed char)-106;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1213597169460695388LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)11487;
unsigned int var_11 = 4246417363U;
int zero = 0;
int var_12 = -489776134;
unsigned long long int var_13 = 14186500679087605036ULL;
unsigned int var_14 = 4134144698U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 54569840U;
unsigned int var_17 = 1337095119U;
signed char var_18 = (signed char)16;
signed char arr_0 [17] ;
unsigned long long int arr_2 [17] [17] ;
int arr_4 [17] [17] ;
signed char arr_8 [24] ;
_Bool arr_9 [24] ;
unsigned int arr_6 [17] [17] ;
long long int arr_7 [17] [17] [17] ;
signed char arr_10 [24] ;
unsigned long long int arr_11 [24] [24] ;
unsigned char arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 17532410403880004560ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -2082577987 : 955173402;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 480959407U : 3113074552U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7183069935946264963LL : 1571734330936660826LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 4907727981120001476ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)26;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
