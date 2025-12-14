#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned int var_2 = 593907551U;
unsigned short var_4 = (unsigned short)42244;
unsigned long long int var_7 = 15617649481642181805ULL;
unsigned int var_8 = 2768627006U;
long long int var_9 = -5153562189734518698LL;
unsigned char var_10 = (unsigned char)205;
int zero = 0;
short var_13 = (short)27782;
long long int var_14 = 3426433726766071423LL;
long long int var_15 = -2676661874014759065LL;
int var_16 = -1363644920;
unsigned int var_17 = 3853839980U;
unsigned char var_18 = (unsigned char)9;
short var_19 = (short)-20082;
int var_20 = -1067090394;
unsigned int arr_0 [23] ;
long long int arr_3 [23] ;
long long int arr_4 [23] ;
long long int arr_10 [23] ;
int arr_13 [23] [23] ;
signed char arr_2 [23] ;
unsigned short arr_5 [23] ;
unsigned long long int arr_6 [23] ;
unsigned int arr_16 [23] [23] ;
unsigned int arr_17 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2066634131U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6184770221398670341LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1548916999004338279LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 8535956595476105638LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 1200394335 : 803785607;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)26572;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 7250279338854765184ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 1220429094U : 2700881689U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 3209692698U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
