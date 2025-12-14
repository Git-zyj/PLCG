#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17358392157638610647ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 9789858841397635516ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-26345;
int zero = 0;
signed char var_17 = (signed char)-60;
int var_18 = 1436080256;
unsigned char var_19 = (unsigned char)70;
unsigned long long int var_20 = 11183692180826381230ULL;
unsigned short var_21 = (unsigned short)930;
unsigned short arr_0 [10] ;
short arr_1 [10] ;
_Bool arr_2 [10] ;
int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44636 : (unsigned short)21247;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)4836 : (short)-19823;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -12159039 : 1036261902;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
