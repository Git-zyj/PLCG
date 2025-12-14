#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5960045538882016169ULL;
unsigned long long int var_3 = 12152956301675740396ULL;
signed char var_5 = (signed char)-42;
unsigned long long int var_8 = 11168014252578353054ULL;
unsigned short var_14 = (unsigned short)20006;
unsigned short var_15 = (unsigned short)8264;
unsigned short var_16 = (unsigned short)35991;
unsigned char var_17 = (unsigned char)103;
int zero = 0;
unsigned long long int var_18 = 681126390066949950ULL;
signed char var_19 = (signed char)16;
int var_20 = 469657334;
unsigned short var_21 = (unsigned short)5881;
unsigned long long int var_22 = 1894414106480501900ULL;
unsigned short var_23 = (unsigned short)27647;
unsigned int arr_1 [20] ;
signed char arr_4 [15] [15] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 721911175U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)3;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
