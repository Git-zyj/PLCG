#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned short var_1 = (unsigned short)58844;
signed char var_2 = (signed char)36;
short var_7 = (short)-18921;
short var_8 = (short)27786;
unsigned short var_11 = (unsigned short)33619;
signed char var_12 = (signed char)-107;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)5291;
unsigned int var_19 = 103246987U;
unsigned long long int var_20 = 15564192126346112241ULL;
unsigned long long int arr_0 [14] [14] ;
signed char arr_1 [14] ;
unsigned short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 448600135293589835ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)21991;
}

void checksum() {
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
