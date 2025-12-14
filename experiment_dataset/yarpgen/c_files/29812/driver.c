#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -184600345;
short var_1 = (short)32569;
signed char var_6 = (signed char)71;
unsigned char var_7 = (unsigned char)51;
int var_13 = 571705126;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -966208243;
signed char var_16 = (signed char)100;
short var_17 = (short)-26681;
long long int var_18 = 5066510069725683232LL;
short var_19 = (short)-5432;
unsigned short var_20 = (unsigned short)58748;
long long int var_21 = 1708932005426264275LL;
unsigned int arr_1 [21] [21] ;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1916086145U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2436;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
