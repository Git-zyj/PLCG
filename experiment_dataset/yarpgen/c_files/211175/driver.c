#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11798113835868549498ULL;
int var_6 = -1802622912;
long long int var_9 = -4671961403612033192LL;
short var_11 = (short)27351;
long long int var_18 = 1939234497931637176LL;
int zero = 0;
signed char var_19 = (signed char)79;
unsigned char var_20 = (unsigned char)60;
unsigned char var_21 = (unsigned char)3;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)29;
signed char var_24 = (signed char)78;
long long int var_25 = 810689793887367842LL;
unsigned int var_26 = 1369784309U;
unsigned long long int arr_0 [10] [10] ;
unsigned char arr_3 [16] [16] ;
long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 12553289335163585842ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -3456534867877955078LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
