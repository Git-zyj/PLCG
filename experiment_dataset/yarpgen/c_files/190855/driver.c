#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7013;
long long int var_2 = -4635851103264323408LL;
unsigned long long int var_3 = 11897619885192795763ULL;
signed char var_4 = (signed char)-98;
signed char var_5 = (signed char)77;
signed char var_8 = (signed char)31;
unsigned long long int var_9 = 10122555332370114323ULL;
long long int var_12 = -36775273156745915LL;
long long int var_14 = 4460318824356921550LL;
unsigned long long int var_16 = 731905065433360901ULL;
signed char var_17 = (signed char)-20;
short var_18 = (short)29494;
long long int var_19 = 8892050891560911020LL;
int zero = 0;
unsigned short var_20 = (unsigned short)50529;
long long int var_21 = 3759000678285783731LL;
long long int var_22 = 3604785003694070460LL;
long long int var_23 = -262802466460035233LL;
unsigned long long int var_24 = 17736600491602421651ULL;
unsigned long long int var_25 = 7121155221919552862ULL;
short arr_2 [23] ;
long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-8538;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -956878212172545009LL;
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
