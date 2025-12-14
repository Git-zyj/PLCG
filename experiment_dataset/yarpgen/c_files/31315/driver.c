#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38215;
int var_4 = -2036646793;
short var_5 = (short)620;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3916817473U;
int var_12 = -1931560056;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)16;
short var_18 = (short)-9311;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)(-127 - 1);
signed char var_21 = (signed char)-83;
unsigned int var_22 = 1260012093U;
unsigned short var_23 = (unsigned short)25710;
unsigned long long int var_24 = 11947104257920232620ULL;
int arr_2 [25] [25] ;
short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 92377638;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)4263 : (short)-10864;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
