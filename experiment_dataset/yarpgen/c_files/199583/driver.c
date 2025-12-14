#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24152;
signed char var_1 = (signed char)-6;
long long int var_4 = 2600666296581067497LL;
unsigned char var_8 = (unsigned char)238;
unsigned char var_9 = (unsigned char)181;
signed char var_10 = (signed char)116;
long long int var_11 = -6704573161415532727LL;
short var_12 = (short)31748;
unsigned long long int var_13 = 10287575976259527694ULL;
long long int var_14 = 8459290337610229303LL;
long long int var_15 = -1957427274519556332LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 217234521;
long long int var_18 = -3715445022229073092LL;
short var_19 = (short)-11064;
unsigned short arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)14973;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
