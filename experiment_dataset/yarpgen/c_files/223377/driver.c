#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31309;
short var_1 = (short)10349;
unsigned long long int var_4 = 3122219402067633515ULL;
_Bool var_10 = (_Bool)0;
short var_14 = (short)-18523;
int zero = 0;
signed char var_17 = (signed char)-110;
unsigned int var_18 = 2247171364U;
int var_19 = 499676888;
int var_20 = -379813992;
int var_21 = -2046200861;
signed char var_22 = (signed char)-10;
short arr_0 [23] ;
long long int arr_1 [23] [23] ;
unsigned short arr_2 [25] ;
unsigned char arr_3 [25] ;
unsigned int arr_4 [25] ;
unsigned short arr_5 [25] ;
signed char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-795;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -1372773502542421105LL : -8349221897994375063LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)41479;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2377899160U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)22385;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)105;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
