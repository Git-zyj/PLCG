#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1004127394U;
unsigned int var_2 = 3232033625U;
long long int var_5 = -1786217452176140259LL;
unsigned short var_8 = (unsigned short)4971;
signed char var_10 = (signed char)-34;
unsigned char var_11 = (unsigned char)216;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2003941613U;
unsigned char var_17 = (unsigned char)174;
int zero = 0;
short var_19 = (short)26267;
unsigned int var_20 = 946174968U;
signed char var_21 = (signed char)59;
unsigned long long int var_22 = 13199907841459851627ULL;
unsigned long long int var_23 = 17930108474334702939ULL;
_Bool var_24 = (_Bool)0;
long long int var_25 = 6390464371640099199LL;
signed char arr_0 [12] ;
unsigned int arr_1 [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3351324006U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
