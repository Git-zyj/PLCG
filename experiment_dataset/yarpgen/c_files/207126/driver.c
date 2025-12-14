#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
unsigned int var_3 = 4248550392U;
unsigned int var_4 = 3040346672U;
short var_5 = (short)-16192;
signed char var_6 = (signed char)105;
signed char var_7 = (signed char)74;
_Bool var_8 = (_Bool)0;
long long int var_10 = 5519472435370008669LL;
signed char var_11 = (signed char)-97;
signed char var_14 = (signed char)-16;
signed char var_16 = (signed char)0;
unsigned long long int var_17 = 18151082591974525737ULL;
int zero = 0;
long long int var_19 = 113500782950126446LL;
short var_20 = (short)-12491;
unsigned char var_21 = (unsigned char)210;
unsigned char var_22 = (unsigned char)15;
long long int arr_0 [21] ;
unsigned short arr_4 [21] ;
unsigned int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1370699193233864099LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)49425;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 483883681U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
