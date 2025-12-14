#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_1 = (unsigned char)183;
short var_2 = (short)-10528;
unsigned short var_3 = (unsigned short)17710;
unsigned char var_4 = (unsigned char)169;
signed char var_5 = (signed char)-5;
unsigned short var_6 = (unsigned short)25090;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 4220627235U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)103;
short var_15 = (short)5321;
unsigned short var_16 = (unsigned short)19500;
unsigned int var_17 = 2718446820U;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] [15] ;
long long int arr_2 [15] [15] ;
long long int arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 12007036833039785054ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 18259371329780772781ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -247950226257241266LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 5685987439152723293LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)20845;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-31;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
