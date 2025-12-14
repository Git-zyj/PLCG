#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4665589740902889170LL;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)210;
short var_10 = (short)25466;
long long int var_12 = -194958741052667940LL;
signed char var_13 = (signed char)119;
unsigned char var_15 = (unsigned char)11;
long long int var_17 = -5408745992249754230LL;
int zero = 0;
long long int var_18 = 4092558776681934267LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-94;
int var_21 = 654117228;
unsigned short var_22 = (unsigned short)64419;
unsigned char var_23 = (unsigned char)114;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)202;
long long int arr_0 [17] ;
long long int arr_3 [21] [21] ;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -9006981719770833071LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 2782502624884896005LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)158;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
