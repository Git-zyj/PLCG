#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2016323238;
short var_7 = (short)-19796;
long long int var_8 = 8836743838676130103LL;
unsigned char var_9 = (unsigned char)41;
signed char var_11 = (signed char)-52;
int zero = 0;
int var_18 = -352161139;
short var_19 = (short)625;
unsigned char var_20 = (unsigned char)61;
short var_21 = (short)9432;
unsigned short var_22 = (unsigned short)20424;
unsigned long long int arr_0 [12] ;
long long int arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 16371511588197277709ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 6704800430085749756LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2504027255464481147LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
