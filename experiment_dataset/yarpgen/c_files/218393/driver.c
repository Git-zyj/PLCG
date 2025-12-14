#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 708166309U;
unsigned int var_1 = 2013663668U;
long long int var_2 = -4528831064001545708LL;
signed char var_3 = (signed char)-27;
unsigned char var_4 = (unsigned char)169;
unsigned long long int var_5 = 18250718630592919696ULL;
unsigned short var_6 = (unsigned short)12836;
unsigned int var_7 = 2763747061U;
unsigned char var_8 = (unsigned char)77;
unsigned long long int var_10 = 2500633562956147478ULL;
signed char var_11 = (signed char)-115;
int var_12 = 1243183636;
_Bool var_16 = (_Bool)1;
short var_17 = (short)19171;
int zero = 0;
unsigned int var_18 = 1097471579U;
unsigned long long int var_19 = 14186655722676721239ULL;
unsigned long long int var_20 = 3428401121495264495ULL;
long long int var_21 = -3134540960936850895LL;
unsigned char var_22 = (unsigned char)185;
unsigned long long int var_23 = 2594670684170989361ULL;
unsigned int arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned char arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2811017773U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)42159;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)7 : (unsigned char)252;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
