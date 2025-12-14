#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
short var_2 = (short)3325;
unsigned short var_4 = (unsigned short)37016;
short var_8 = (short)23461;
short var_12 = (short)31456;
int zero = 0;
unsigned char var_14 = (unsigned char)228;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)23;
signed char var_17 = (signed char)123;
unsigned int var_18 = 2028577408U;
unsigned long long int var_19 = 2875336432520518695ULL;
unsigned char var_20 = (unsigned char)81;
short var_21 = (short)28553;
short var_22 = (short)-23736;
unsigned short arr_0 [24] [24] ;
int arr_1 [24] ;
signed char arr_2 [22] [22] ;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15501;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 71746106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)17535;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
