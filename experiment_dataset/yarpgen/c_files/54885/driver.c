#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2101221816;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)7220;
int var_7 = -1074399885;
unsigned char var_11 = (unsigned char)154;
unsigned long long int var_12 = 4883699539052662075ULL;
unsigned char var_13 = (unsigned char)181;
long long int var_14 = -3133857457812777813LL;
unsigned int var_16 = 2911135551U;
unsigned short var_17 = (unsigned short)29926;
int var_18 = -1174338327;
int zero = 0;
unsigned short var_19 = (unsigned short)19223;
int var_20 = -187461730;
signed char var_21 = (signed char)-16;
unsigned int var_22 = 929345935U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)80;
unsigned int arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 105288492U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
