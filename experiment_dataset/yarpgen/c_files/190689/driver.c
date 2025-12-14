#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3064018465U;
unsigned char var_7 = (unsigned char)182;
long long int var_9 = 1807363008302245763LL;
unsigned short var_11 = (unsigned short)28921;
int var_12 = 1332801434;
int zero = 0;
short var_14 = (short)25641;
unsigned short var_15 = (unsigned short)23464;
signed char var_16 = (signed char)7;
short var_17 = (short)24013;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)7295;
unsigned short var_20 = (unsigned short)15456;
signed char arr_1 [21] ;
unsigned short arr_3 [21] ;
unsigned short arr_6 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50713 : (unsigned short)29224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47725;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
