#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9071019295053135237LL;
long long int var_1 = 7451371853238404044LL;
long long int var_2 = -6477738357434662612LL;
long long int var_5 = 6952947815898414568LL;
int var_6 = -1405529238;
signed char var_8 = (signed char)31;
int var_10 = 168580103;
int zero = 0;
unsigned int var_13 = 1684966569U;
long long int var_14 = 4247500251506325748LL;
short var_15 = (short)-12686;
int arr_3 [14] ;
long long int arr_6 [14] ;
int arr_8 [14] ;
short arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1851468423;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 5056612933774042267LL : -790908350331714705LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1151861393 : -2116828271;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-12495 : (short)-10310;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
