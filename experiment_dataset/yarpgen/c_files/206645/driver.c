#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9066523661032475916LL;
unsigned short var_2 = (unsigned short)33795;
long long int var_8 = -3451827504085816564LL;
int var_13 = -1538406710;
_Bool var_14 = (_Bool)0;
signed char var_17 = (signed char)85;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2419415972U;
unsigned short var_22 = (unsigned short)55217;
signed char var_23 = (signed char)62;
signed char var_24 = (signed char)-112;
unsigned char var_25 = (unsigned char)54;
signed char var_26 = (signed char)-61;
signed char arr_0 [10] [10] ;
int arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -454534658;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)50;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
