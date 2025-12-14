#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41617;
short var_2 = (short)25962;
unsigned short var_3 = (unsigned short)39666;
int var_4 = -1559342983;
unsigned int var_5 = 694161423U;
long long int var_7 = -2676718372242664667LL;
long long int var_8 = 5855378197393909283LL;
int var_10 = -555916873;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 1052998522829659287ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)3;
int var_17 = 587877878;
signed char var_18 = (signed char)87;
unsigned int var_19 = 1160619304U;
unsigned long long int var_20 = 2958499673805986498ULL;
unsigned long long int var_21 = 4899885557905951518ULL;
long long int arr_1 [15] ;
unsigned char arr_6 [14] ;
unsigned int arr_3 [15] [15] ;
unsigned int arr_7 [14] ;
int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2419749218168295369LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 653309350U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1284690833U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1452316982;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
