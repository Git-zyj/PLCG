#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 624464871343752902ULL;
unsigned char var_3 = (unsigned char)199;
_Bool var_5 = (_Bool)0;
short var_10 = (short)-19487;
int var_15 = 324827778;
int zero = 0;
unsigned int var_17 = 2387392673U;
unsigned int var_18 = 2648927649U;
long long int var_19 = -7330218876185410729LL;
short var_20 = (short)-9071;
unsigned char var_21 = (unsigned char)164;
unsigned char var_22 = (unsigned char)78;
short var_23 = (short)-23773;
unsigned short arr_2 [15] [15] ;
signed char arr_5 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)54177 : (unsigned short)36094;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-51;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
