#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3427246728U;
unsigned short var_11 = (unsigned short)46524;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)176;
unsigned char var_20 = (unsigned char)169;
signed char var_21 = (signed char)-27;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)62033;
_Bool var_24 = (_Bool)0;
unsigned char arr_0 [11] ;
_Bool arr_4 [11] [11] [11] ;
signed char arr_6 [25] [25] ;
unsigned long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 8577392747624629678ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
