#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16009494064747197163ULL;
unsigned int var_2 = 499038587U;
signed char var_3 = (signed char)-46;
int var_5 = 856401738;
unsigned int var_9 = 539703330U;
int zero = 0;
unsigned char var_12 = (unsigned char)139;
unsigned long long int var_13 = 13736757375535229443ULL;
signed char var_14 = (signed char)-100;
unsigned long long int var_15 = 7056302337435552026ULL;
long long int var_16 = 1994988555462220104LL;
unsigned char var_17 = (unsigned char)214;
unsigned long long int var_18 = 14836053590341873759ULL;
int var_19 = -62789683;
unsigned char var_20 = (unsigned char)38;
unsigned short var_21 = (unsigned short)55720;
_Bool arr_0 [23] ;
int arr_1 [23] ;
unsigned long long int arr_4 [23] ;
long long int arr_5 [23] [23] ;
unsigned char arr_2 [23] ;
unsigned char arr_6 [23] ;
int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1536204979;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 17794251016811339238ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -4540529504650547979LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1845644476 : -1218763238;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
