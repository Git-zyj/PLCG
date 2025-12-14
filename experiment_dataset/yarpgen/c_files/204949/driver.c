#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40999;
unsigned int var_2 = 1436777327U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1234617943U;
unsigned short var_6 = (unsigned short)20637;
unsigned int var_7 = 449244612U;
unsigned long long int var_8 = 11797529143483467308ULL;
unsigned int var_9 = 2566745541U;
unsigned int var_10 = 1565417228U;
int var_11 = 1363110159;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)162;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5292246557006064527ULL;
signed char var_17 = (signed char)18;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)137;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
