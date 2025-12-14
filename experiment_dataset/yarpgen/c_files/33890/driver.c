#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18609;
unsigned short var_6 = (unsigned short)44312;
unsigned char var_10 = (unsigned char)179;
long long int var_15 = 8029352228861681752LL;
int zero = 0;
signed char var_18 = (signed char)37;
unsigned char var_19 = (unsigned char)27;
unsigned short var_20 = (unsigned short)1289;
_Bool var_21 = (_Bool)1;
long long int var_22 = -396397834460461014LL;
unsigned char var_23 = (unsigned char)141;
_Bool arr_0 [18] [18] ;
int arr_3 [13] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 506704500;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 13541655;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
