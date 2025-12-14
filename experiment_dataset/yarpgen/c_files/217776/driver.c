#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10661849726418642098ULL;
unsigned char var_5 = (unsigned char)97;
int var_6 = 934485191;
unsigned short var_8 = (unsigned short)25780;
short var_13 = (short)-7621;
long long int var_17 = 8948223551200720385LL;
unsigned short var_18 = (unsigned short)52620;
signed char var_19 = (signed char)-76;
int zero = 0;
signed char var_20 = (signed char)-107;
short var_21 = (short)-13267;
unsigned int var_22 = 3593535492U;
unsigned int var_23 = 2854955701U;
unsigned int var_24 = 2486868232U;
unsigned int var_25 = 3404502312U;
unsigned long long int var_26 = 16965552603870462682ULL;
long long int arr_0 [25] ;
int arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 447835406063806052LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 389556909;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)255 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -425595662 : -321798515;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
