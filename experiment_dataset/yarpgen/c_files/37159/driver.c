#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3501794217937922919LL;
unsigned int var_1 = 814950521U;
unsigned int var_3 = 2187780136U;
unsigned long long int var_5 = 12123548921288362950ULL;
unsigned char var_6 = (unsigned char)102;
unsigned char var_7 = (unsigned char)169;
int var_9 = -1361876596;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8989623472703956673ULL;
long long int var_13 = -2028697221543675631LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 431889181207012841ULL;
short var_16 = (short)25097;
int var_17 = 1192298212;
int var_18 = -824969029;
short var_19 = (short)-10089;
signed char var_20 = (signed char)-106;
signed char arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
int arr_3 [15] [15] ;
unsigned int arr_4 [15] ;
unsigned char arr_5 [15] [15] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -1531224171;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1393864719U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)127;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
