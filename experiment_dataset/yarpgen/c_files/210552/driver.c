#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned short var_3 = (unsigned short)17772;
unsigned short var_4 = (unsigned short)51959;
int var_5 = 1436481341;
long long int var_6 = -4997537232146512296LL;
short var_12 = (short)-22004;
long long int var_13 = -4280496461958475991LL;
int zero = 0;
unsigned int var_14 = 3043623832U;
unsigned short var_15 = (unsigned short)4866;
unsigned short var_16 = (unsigned short)60660;
unsigned short var_17 = (unsigned short)10202;
unsigned short var_18 = (unsigned short)44535;
_Bool arr_0 [25] ;
unsigned int arr_4 [25] ;
short arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1939108001U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)21818;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
