#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12598143740474611773ULL;
short var_8 = (short)27190;
int var_9 = 1977520287;
int var_16 = -1709341361;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 957899238;
unsigned int var_22 = 3796573830U;
int var_23 = 1553937669;
unsigned long long int var_24 = 3204075133851926679ULL;
unsigned long long int var_25 = 3217036623748462075ULL;
signed char var_26 = (signed char)-124;
short var_27 = (short)-14078;
_Bool arr_0 [15] ;
int arr_1 [15] [15] ;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -957363579;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1596035319;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
