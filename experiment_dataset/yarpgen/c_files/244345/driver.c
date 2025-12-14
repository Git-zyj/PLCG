#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22192;
unsigned short var_1 = (unsigned short)51356;
int var_2 = 1268946269;
unsigned short var_3 = (unsigned short)17385;
signed char var_4 = (signed char)-78;
short var_6 = (short)24701;
short var_12 = (short)32113;
int zero = 0;
short var_13 = (short)-21926;
unsigned int var_14 = 2102079513U;
signed char var_15 = (signed char)77;
int var_16 = 378536913;
signed char var_17 = (signed char)-1;
unsigned char arr_1 [20] ;
unsigned short arr_3 [20] [20] [20] ;
unsigned short arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)50067;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)625 : (unsigned short)19468;
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
