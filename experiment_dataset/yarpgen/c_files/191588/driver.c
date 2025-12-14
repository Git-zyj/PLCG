#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -30354350;
unsigned long long int var_1 = 10240121475060876521ULL;
signed char var_2 = (signed char)92;
unsigned long long int var_4 = 4968724324883778932ULL;
unsigned long long int var_6 = 2521856713195678700ULL;
signed char var_7 = (signed char)89;
unsigned char var_8 = (unsigned char)239;
int var_9 = 628626650;
unsigned short var_10 = (unsigned short)42175;
unsigned short var_11 = (unsigned short)33795;
unsigned short var_12 = (unsigned short)40921;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10527764392330644451ULL;
unsigned short var_15 = (unsigned short)64168;
long long int var_16 = 1838636355693066122LL;
short var_17 = (short)22720;
unsigned long long int var_18 = 15283715379511990648ULL;
unsigned char var_19 = (unsigned char)120;
unsigned int arr_0 [25] [25] ;
signed char arr_1 [25] ;
short arr_3 [13] [13] ;
unsigned int arr_2 [25] ;
short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 971099384U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22652;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 907564419U : 115914728U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)-26573;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
