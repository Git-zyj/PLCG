#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63333;
unsigned int var_6 = 1945430793U;
unsigned short var_7 = (unsigned short)22022;
_Bool var_12 = (_Bool)1;
unsigned int var_17 = 411151843U;
unsigned int var_18 = 2911537398U;
int zero = 0;
unsigned short var_19 = (unsigned short)45833;
int var_20 = 2137374049;
unsigned int var_21 = 186098441U;
signed char var_22 = (signed char)56;
unsigned long long int arr_0 [23] ;
_Bool arr_1 [23] [23] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 6483290609362324481ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -572006348;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
