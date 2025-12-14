#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47099;
long long int var_2 = -9070138247703321614LL;
unsigned short var_6 = (unsigned short)32826;
unsigned long long int var_9 = 2348069241918150875ULL;
unsigned char var_10 = (unsigned char)126;
unsigned long long int var_12 = 2373479271936170155ULL;
signed char var_13 = (signed char)-18;
unsigned char var_16 = (unsigned char)219;
unsigned short var_17 = (unsigned short)29234;
int zero = 0;
unsigned short var_20 = (unsigned short)7739;
short var_21 = (short)26381;
unsigned short var_22 = (unsigned short)62447;
unsigned long long int var_23 = 581768926565746456ULL;
int var_24 = 259293281;
unsigned int var_25 = 1949189650U;
unsigned short var_26 = (unsigned short)39286;
unsigned long long int arr_0 [11] [11] ;
signed char arr_1 [11] ;
long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 7871966573850059366ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5689059090121179386LL : -3293835354982432797LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
