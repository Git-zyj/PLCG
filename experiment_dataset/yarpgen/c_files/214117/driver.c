#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)1259;
signed char var_2 = (signed char)-23;
unsigned long long int var_3 = 9178883738803332733ULL;
int var_4 = 2132000070;
unsigned char var_5 = (unsigned char)56;
int var_6 = 727400859;
unsigned int var_8 = 557822796U;
signed char var_9 = (signed char)80;
int zero = 0;
int var_10 = -689235878;
unsigned char var_11 = (unsigned char)124;
unsigned long long int var_12 = 17528385714024849478ULL;
short var_13 = (short)-8054;
_Bool var_14 = (_Bool)0;
int arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 391921175 : -151374783;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7385395786943481586ULL : 7441908844995984216ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
