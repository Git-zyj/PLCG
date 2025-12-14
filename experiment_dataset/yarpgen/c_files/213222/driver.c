#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23386;
long long int var_1 = -6877571861504798444LL;
unsigned int var_2 = 3587237265U;
short var_3 = (short)-6918;
unsigned short var_4 = (unsigned short)22033;
unsigned int var_5 = 1005175657U;
unsigned int var_6 = 3597904539U;
unsigned short var_7 = (unsigned short)48047;
short var_8 = (short)16853;
signed char var_9 = (signed char)-33;
short var_10 = (short)-21559;
signed char var_15 = (signed char)-92;
int zero = 0;
unsigned int var_16 = 1745128832U;
unsigned long long int var_17 = 6318283516080049515ULL;
int var_18 = -1301191776;
_Bool var_19 = (_Bool)0;
short var_20 = (short)25673;
long long int var_21 = 615398532660651899LL;
unsigned int var_22 = 2108640414U;
signed char arr_0 [12] [12] ;
_Bool arr_1 [12] ;
_Bool arr_2 [12] ;
unsigned int arr_3 [12] ;
int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1806330859U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1906662187 : 102391740;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
