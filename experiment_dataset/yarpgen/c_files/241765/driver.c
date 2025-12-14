#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61054;
long long int var_1 = 9214342499107352251LL;
unsigned int var_2 = 434236173U;
int var_3 = -2038241828;
int var_5 = 430128951;
long long int var_9 = -6706445859330221582LL;
short var_12 = (short)22389;
int zero = 0;
unsigned short var_14 = (unsigned short)52756;
unsigned long long int var_15 = 15246302249862402085ULL;
short var_16 = (short)10289;
long long int var_17 = -3984944707363406449LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)245;
unsigned short var_20 = (unsigned short)20553;
int var_21 = 1646635289;
unsigned char var_22 = (unsigned char)195;
int var_23 = -336475465;
int arr_0 [21] ;
int arr_3 [22] ;
unsigned short arr_5 [22] [22] ;
unsigned short arr_6 [21] ;
unsigned long long int arr_7 [21] ;
long long int arr_2 [21] [21] ;
signed char arr_8 [21] ;
long long int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1496350834;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -392686105;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)60215;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)56572;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 9280569464713361865ULL : 412511950801009846ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 3198423479266887115LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 216548929493496679LL : 7986157584917669438LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
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
