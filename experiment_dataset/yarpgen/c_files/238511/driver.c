#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)595;
unsigned short var_3 = (unsigned short)44622;
int var_4 = -178618889;
signed char var_5 = (signed char)-103;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 10753467321400813252ULL;
int zero = 0;
signed char var_12 = (signed char)67;
short var_13 = (short)-27572;
short var_14 = (short)-2378;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)57247;
long long int arr_1 [18] [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 4447185107644867932LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 16377992963653420512ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
