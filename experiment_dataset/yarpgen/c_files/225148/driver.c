#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned long long int var_10 = 10784449549249365982ULL;
long long int var_15 = -3306155971360512046LL;
short var_17 = (short)32730;
short var_19 = (short)-6361;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)1610;
long long int var_22 = -3810954281067110853LL;
int var_23 = -409652517;
unsigned short var_24 = (unsigned short)18974;
unsigned long long int var_25 = 9206086305099627243ULL;
short arr_1 [20] ;
short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-24218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)12966;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
