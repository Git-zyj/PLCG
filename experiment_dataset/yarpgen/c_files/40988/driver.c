#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25536;
unsigned long long int var_3 = 11692770647643195694ULL;
signed char var_5 = (signed char)49;
int var_13 = -1103465540;
int zero = 0;
unsigned long long int var_14 = 8103650302371013768ULL;
long long int var_15 = -333903127939282412LL;
int var_16 = 676583151;
int var_17 = -731102567;
unsigned char var_18 = (unsigned char)239;
long long int arr_0 [15] [15] ;
short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -6670908903476776701LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)30492 : (short)-9945;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
