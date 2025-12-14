#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5940;
unsigned int var_2 = 3005338982U;
int var_3 = -1242622864;
unsigned long long int var_5 = 8752270224927784904ULL;
unsigned short var_6 = (unsigned short)47828;
unsigned int var_8 = 921546618U;
int var_10 = 450865491;
int zero = 0;
unsigned char var_11 = (unsigned char)193;
unsigned int var_12 = 733835545U;
unsigned int var_13 = 597007299U;
short var_14 = (short)30097;
unsigned int arr_1 [25] [25] ;
unsigned long long int arr_3 [25] ;
short arr_6 [25] [25] ;
signed char arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 4022549626U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 6850908294950508347ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)23228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-35;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
