#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
long long int var_1 = -7523807780147539975LL;
long long int var_2 = 282012491349671105LL;
unsigned char var_3 = (unsigned char)191;
long long int var_4 = -8627033183870239804LL;
unsigned long long int var_5 = 16160750327677565700ULL;
short var_6 = (short)9835;
unsigned long long int var_8 = 6831373094189309558ULL;
unsigned long long int var_9 = 12236690942500108615ULL;
signed char var_10 = (signed char)-97;
int zero = 0;
long long int var_11 = -3905177909352948303LL;
signed char var_12 = (signed char)120;
unsigned long long int var_13 = 18213987546517386672ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 193620027U;
unsigned int var_16 = 2850190220U;
unsigned int var_17 = 2532482459U;
int arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
unsigned int arr_3 [15] ;
_Bool arr_4 [15] ;
long long int arr_2 [12] ;
signed char arr_5 [15] ;
signed char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 179374046;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1218192124660891195ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2442883175U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1365854172568982106LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)61;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
