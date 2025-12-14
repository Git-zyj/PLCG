#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7352658505787941929LL;
unsigned char var_1 = (unsigned char)255;
unsigned char var_3 = (unsigned char)32;
int var_4 = 1205395114;
unsigned char var_5 = (unsigned char)151;
signed char var_6 = (signed char)-28;
short var_13 = (short)22315;
_Bool var_14 = (_Bool)0;
long long int var_18 = -52100821872121290LL;
int zero = 0;
unsigned short var_20 = (unsigned short)29057;
_Bool var_21 = (_Bool)1;
int var_22 = 1907887844;
unsigned char var_23 = (unsigned char)179;
unsigned long long int var_24 = 4456200034122991572ULL;
short var_25 = (short)11480;
short var_26 = (short)-24250;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
unsigned char arr_4 [13] ;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -5221166779490535466LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 5956903533074805914ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)211;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
