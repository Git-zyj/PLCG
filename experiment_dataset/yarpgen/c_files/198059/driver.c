#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
int var_2 = 962425184;
short var_3 = (short)-6577;
_Bool var_4 = (_Bool)1;
long long int var_5 = 8924910348082299818LL;
signed char var_6 = (signed char)-94;
signed char var_11 = (signed char)-98;
int zero = 0;
signed char var_13 = (signed char)75;
signed char var_14 = (signed char)-15;
signed char var_15 = (signed char)-83;
unsigned short var_16 = (unsigned short)42796;
unsigned long long int var_17 = 7816002979486405597ULL;
unsigned long long int var_18 = 2399323685275472015ULL;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned int arr_3 [22] [22] [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 5379061507208429535ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 138718991685253383ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2205414914U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1321514687394690382LL : -8693425291547194968LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
