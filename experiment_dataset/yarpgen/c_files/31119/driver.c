#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
unsigned short var_4 = (unsigned short)17146;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)61;
unsigned long long int var_9 = 13634284327670877939ULL;
long long int var_10 = -2997296540690171149LL;
unsigned long long int var_12 = 18290748474395895859ULL;
unsigned long long int var_14 = 14731317475264033247ULL;
unsigned long long int var_16 = 1937814041055715982ULL;
int zero = 0;
long long int var_18 = -5883039598906932112LL;
unsigned long long int var_19 = 4204117981080281840ULL;
unsigned int var_20 = 3968098203U;
unsigned long long int var_21 = 4568893329720128745ULL;
unsigned int var_22 = 239142119U;
unsigned long long int arr_2 [12] [12] ;
unsigned char arr_5 [12] [12] [12] ;
long long int arr_8 [23] [23] ;
signed char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 11471897429421762336ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -7163356099007568811LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)68;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
