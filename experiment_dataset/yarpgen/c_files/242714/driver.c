#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3714414377888155761LL;
unsigned int var_2 = 1396140917U;
signed char var_4 = (signed char)-104;
long long int var_5 = 6912075059952189586LL;
unsigned int var_6 = 3573963616U;
long long int var_8 = 6216213135857843125LL;
unsigned char var_10 = (unsigned char)166;
unsigned short var_15 = (unsigned short)31070;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 5504079748129740363LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5310252406232804744LL;
unsigned long long int var_22 = 12947813927197135713ULL;
long long int arr_0 [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -438961999108635503LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13457612540468430572ULL : 9510336005684323046ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
