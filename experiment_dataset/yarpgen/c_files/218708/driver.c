#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12273624352004262188ULL;
unsigned char var_1 = (unsigned char)105;
unsigned int var_5 = 3215556059U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)249;
int zero = 0;
signed char var_10 = (signed char)-6;
unsigned int var_11 = 2831354955U;
signed char var_12 = (signed char)-42;
int var_13 = 177924718;
unsigned short arr_1 [13] ;
unsigned long long int arr_2 [13] ;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)8438;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 7566073450286053340ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)-3;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
