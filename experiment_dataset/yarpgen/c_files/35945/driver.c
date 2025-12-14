#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -715137541;
long long int var_1 = 5350329454407207411LL;
unsigned char var_3 = (unsigned char)250;
signed char var_5 = (signed char)81;
int var_7 = 198681319;
int var_8 = -1967484681;
unsigned char var_9 = (unsigned char)160;
short var_10 = (short)11687;
int zero = 0;
unsigned long long int var_11 = 9912111686468045881ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)216;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4473060021418546485ULL;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
_Bool arr_2 [22] ;
long long int arr_5 [14] [14] ;
_Bool arr_6 [14] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 589440550246054200LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -5617837396161092401LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1210319817 : -952275689;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
