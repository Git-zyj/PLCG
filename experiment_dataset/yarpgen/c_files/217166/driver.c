#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2269876775U;
short var_1 = (short)30478;
unsigned short var_2 = (unsigned short)14293;
short var_3 = (short)18947;
short var_4 = (short)-24497;
unsigned long long int var_5 = 2357530967314038882ULL;
unsigned char var_6 = (unsigned char)60;
long long int var_7 = -6374113184746791408LL;
unsigned char var_8 = (unsigned char)14;
short var_9 = (short)21438;
unsigned char var_10 = (unsigned char)141;
int zero = 0;
short var_11 = (short)-19197;
signed char var_12 = (signed char)11;
unsigned int var_13 = 2310487967U;
signed char var_14 = (signed char)70;
short var_15 = (short)4019;
unsigned char var_16 = (unsigned char)82;
short arr_0 [20] ;
short arr_1 [20] ;
short arr_2 [20] ;
unsigned short arr_3 [20] ;
signed char arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)861;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)1619 : (short)31245;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-3738 : (short)19822;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)35199;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-64 : (signed char)-76;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
