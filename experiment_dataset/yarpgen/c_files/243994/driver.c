#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
long long int var_1 = 8661703493700313746LL;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)74;
unsigned char var_7 = (unsigned char)176;
long long int var_8 = -5168719298626383077LL;
signed char var_9 = (signed char)11;
int zero = 0;
signed char var_10 = (signed char)82;
int var_11 = 113307;
short var_12 = (short)28370;
int var_13 = -370203486;
unsigned long long int var_14 = 14278650745336934300ULL;
unsigned long long int arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
unsigned short arr_4 [22] [22] ;
short arr_6 [22] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 655534239011910061ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)36013;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1435;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-11998;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-12943;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
