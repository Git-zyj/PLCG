#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned int var_3 = 2294157723U;
short var_6 = (short)-2549;
signed char var_10 = (signed char)-82;
int zero = 0;
short var_13 = (short)13975;
_Bool var_14 = (_Bool)0;
int var_15 = 2049482325;
short var_16 = (short)-10271;
int var_17 = 862463051;
signed char arr_3 [16] ;
unsigned long long int arr_4 [16] [16] [16] ;
unsigned char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11267333637549135631ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
