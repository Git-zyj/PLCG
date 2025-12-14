#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5352403761454780735LL;
unsigned int var_4 = 3264230023U;
unsigned int var_8 = 2459374985U;
long long int var_9 = -822900360048124330LL;
short var_15 = (short)15000;
int zero = 0;
unsigned int var_18 = 953599636U;
unsigned short var_19 = (unsigned short)56321;
unsigned int var_20 = 3319578138U;
unsigned int var_21 = 2233767760U;
long long int var_22 = -7532175660707601453LL;
unsigned char var_23 = (unsigned char)135;
int arr_2 [24] [24] [24] ;
unsigned int arr_5 [24] [24] [24] ;
unsigned long long int arr_7 [24] [24] ;
unsigned int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1415061123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2283991956U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 12498277244709662638ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 2057821273U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
