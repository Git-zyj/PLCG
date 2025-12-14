#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4245173141889114148ULL;
long long int var_1 = 6497244255862285591LL;
signed char var_3 = (signed char)-109;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_9 = 427268951;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-19;
int zero = 0;
unsigned long long int var_14 = 10321192390341074933ULL;
_Bool var_15 = (_Bool)0;
int var_16 = -2087983943;
unsigned long long int var_17 = 16046396273842646348ULL;
unsigned long long int var_18 = 5964523335503841429ULL;
int var_19 = -753370836;
unsigned char arr_0 [13] ;
unsigned short arr_1 [13] ;
long long int arr_2 [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)7038;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1417651879458948627LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -2517283491314597816LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
