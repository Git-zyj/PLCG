#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24350;
unsigned short var_3 = (unsigned short)34599;
unsigned int var_4 = 50076779U;
signed char var_5 = (signed char)-126;
unsigned long long int var_6 = 14797867001254797152ULL;
int var_7 = -1797227901;
unsigned char var_11 = (unsigned char)59;
signed char var_12 = (signed char)-5;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
unsigned char var_17 = (unsigned char)245;
signed char var_18 = (signed char)-103;
signed char var_19 = (signed char)-18;
unsigned char var_20 = (unsigned char)99;
unsigned char var_21 = (unsigned char)56;
unsigned int arr_0 [25] ;
long long int arr_1 [25] [25] ;
_Bool arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 245094085U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 240575305373190015LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
