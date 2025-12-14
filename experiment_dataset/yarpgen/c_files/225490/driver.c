#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18380495782666177595ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-53;
signed char var_5 = (signed char)71;
_Bool var_6 = (_Bool)1;
int var_8 = -1702768127;
signed char var_9 = (signed char)112;
unsigned char var_10 = (unsigned char)82;
unsigned long long int var_12 = 12372874862120067542ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)14720;
short var_15 = (short)24021;
unsigned long long int var_16 = 2704937304296448737ULL;
unsigned char var_17 = (unsigned char)22;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 525391819U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
