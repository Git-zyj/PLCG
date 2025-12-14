#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2228589353U;
long long int var_2 = 5753991333870156450LL;
unsigned int var_4 = 2941030818U;
signed char var_5 = (signed char)-41;
signed char var_7 = (signed char)-98;
signed char var_10 = (signed char)-102;
unsigned int var_11 = 315753693U;
long long int var_12 = 4416842863697819830LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -75599441;
unsigned int var_15 = 3473410971U;
unsigned int var_16 = 2851218054U;
long long int var_17 = -6966050171923131387LL;
unsigned char var_18 = (unsigned char)94;
unsigned long long int var_19 = 16115770244309372670ULL;
signed char var_20 = (signed char)-72;
unsigned int arr_1 [10] ;
int arr_2 [10] ;
short arr_5 [13] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 170749002U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1706343365;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)25270;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2775967601U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
