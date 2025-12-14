#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
unsigned short var_3 = (unsigned short)20187;
short var_4 = (short)-4973;
unsigned char var_8 = (unsigned char)29;
signed char var_11 = (signed char)51;
unsigned short var_16 = (unsigned short)51518;
int var_19 = -1898489156;
int zero = 0;
long long int var_20 = 5168867699383914396LL;
unsigned short var_21 = (unsigned short)31945;
unsigned short var_22 = (unsigned short)18292;
int var_23 = -1924117145;
short var_24 = (short)-24406;
unsigned short arr_1 [21] ;
short arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)17460;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11421 : (short)23284;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29168 : (unsigned short)4760;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
