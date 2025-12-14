#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4826253088970463848ULL;
long long int var_1 = 8556995000432871148LL;
unsigned short var_2 = (unsigned short)20473;
long long int var_4 = 6320806125977970897LL;
unsigned short var_5 = (unsigned short)4378;
unsigned char var_7 = (unsigned char)196;
long long int var_9 = 6512444878205133518LL;
unsigned short var_11 = (unsigned short)57912;
unsigned char var_13 = (unsigned char)178;
signed char var_16 = (signed char)-5;
unsigned short var_17 = (unsigned short)60086;
short var_18 = (short)27668;
unsigned long long int var_19 = 12229886673301164348ULL;
int zero = 0;
signed char var_20 = (signed char)-123;
long long int var_21 = -6276511254613475002LL;
unsigned char var_22 = (unsigned char)123;
unsigned short var_23 = (unsigned short)49238;
unsigned int var_24 = 412108531U;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-12224;
short arr_0 [25] ;
unsigned short arr_1 [25] ;
int arr_3 [15] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)21250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)62671;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1748354554;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)11189;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
