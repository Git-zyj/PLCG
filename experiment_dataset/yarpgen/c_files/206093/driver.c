#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53342;
int var_1 = 908278577;
int var_2 = 1285564129;
unsigned int var_3 = 1864216030U;
unsigned short var_4 = (unsigned short)44541;
long long int var_5 = 92438638825486285LL;
unsigned int var_6 = 2720110584U;
unsigned int var_7 = 1980360582U;
short var_8 = (short)16734;
_Bool var_9 = (_Bool)1;
long long int var_10 = -7705657575810898324LL;
unsigned long long int var_11 = 4634645037247590268ULL;
unsigned long long int var_14 = 17682446317435381779ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)14;
unsigned long long int var_16 = 2553630216782934750ULL;
long long int var_17 = 5761947141802965316LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 895572157U;
unsigned short var_20 = (unsigned short)22514;
long long int var_21 = 3403694638707160984LL;
int var_22 = 145986243;
unsigned short arr_0 [10] ;
signed char arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned char arr_4 [10] [10] [10] ;
unsigned int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)7037;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1309751631903102630ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 3401855610U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
