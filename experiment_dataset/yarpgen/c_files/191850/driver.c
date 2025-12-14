#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
unsigned int var_1 = 1258946202U;
unsigned long long int var_4 = 10342403757017825633ULL;
signed char var_5 = (signed char)93;
unsigned char var_6 = (unsigned char)243;
long long int var_8 = -540234721594039720LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_11 = -9149084656951418443LL;
unsigned int var_12 = 450422965U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9532258394828178427ULL;
unsigned char arr_0 [16] ;
unsigned char arr_3 [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)25622;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
