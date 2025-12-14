#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5428818363330539685LL;
unsigned short var_6 = (unsigned short)43966;
long long int var_8 = -6316173577029074768LL;
unsigned short var_9 = (unsigned short)60811;
short var_10 = (short)8934;
short var_11 = (short)-19567;
short var_12 = (short)-21046;
long long int var_13 = 4461274159167992592LL;
short var_14 = (short)23241;
long long int var_15 = 8843508919473599765LL;
int zero = 0;
unsigned short var_16 = (unsigned short)63362;
unsigned int var_17 = 2598209566U;
short var_18 = (short)-9501;
unsigned int var_19 = 493209239U;
unsigned int var_20 = 459864689U;
unsigned char var_21 = (unsigned char)156;
unsigned short var_22 = (unsigned short)54653;
long long int var_23 = 6455178864056545526LL;
unsigned short var_24 = (unsigned short)40937;
unsigned char arr_5 [23] [23] ;
unsigned char arr_6 [23] ;
unsigned short arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51123 : (unsigned short)33791;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
