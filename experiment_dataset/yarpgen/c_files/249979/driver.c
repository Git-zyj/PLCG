#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2053673517775289469LL;
long long int var_2 = 7847759117603109793LL;
long long int var_3 = 8675092931809789385LL;
signed char var_5 = (signed char)-106;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4505594768411054433ULL;
long long int var_8 = 2560486791830561769LL;
unsigned long long int var_9 = 16138657495252983802ULL;
long long int var_10 = 4297921371990850419LL;
int zero = 0;
unsigned short var_11 = (unsigned short)57926;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14557155384664635788ULL;
unsigned long long int var_14 = 127953572289557485ULL;
unsigned long long int var_15 = 16304701038799397298ULL;
unsigned char var_16 = (unsigned char)67;
unsigned short var_17 = (unsigned short)14491;
signed char var_18 = (signed char)20;
unsigned short var_19 = (unsigned short)1669;
short arr_3 [14] ;
long long int arr_8 [14] [14] ;
_Bool arr_13 [17] [17] ;
_Bool arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-17920 : (short)-12804;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -8491944536553442514LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
