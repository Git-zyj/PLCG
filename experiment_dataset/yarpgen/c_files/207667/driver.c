#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3336683997U;
unsigned int var_2 = 1662559839U;
short var_4 = (short)-20026;
unsigned char var_5 = (unsigned char)242;
long long int var_8 = -6405376079104613885LL;
unsigned int var_10 = 2776921339U;
unsigned char var_16 = (unsigned char)253;
int zero = 0;
short var_17 = (short)-10896;
long long int var_18 = -5964264338650176941LL;
unsigned char var_19 = (unsigned char)226;
unsigned int var_20 = 3994254656U;
unsigned char var_21 = (unsigned char)151;
unsigned char var_22 = (unsigned char)137;
short var_23 = (short)10244;
short arr_1 [16] ;
long long int arr_6 [16] [16] [16] ;
short arr_7 [16] ;
unsigned int arr_14 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)23040;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -167880746712859861LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)16630;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2688488277U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
