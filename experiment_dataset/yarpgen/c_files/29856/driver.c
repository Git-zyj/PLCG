#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)22;
unsigned long long int var_4 = 6542405351451565191ULL;
short var_6 = (short)21498;
unsigned char var_8 = (unsigned char)16;
long long int var_9 = 7146530569444669954LL;
long long int var_11 = 4090607619810531886LL;
short var_12 = (short)-31687;
int zero = 0;
int var_13 = 991756795;
short var_14 = (short)11465;
signed char var_15 = (signed char)-44;
long long int var_16 = -2696119380692832478LL;
unsigned long long int arr_0 [19] ;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 15765848576736444445ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)-32408;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
