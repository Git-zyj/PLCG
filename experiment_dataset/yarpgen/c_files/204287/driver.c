#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19291;
int zero = 0;
int var_12 = 1625173855;
signed char var_13 = (signed char)37;
short var_14 = (short)-18353;
long long int var_15 = 3413799058794629467LL;
long long int var_16 = -8466108080484727850LL;
unsigned long long int var_17 = 15027450666592283146ULL;
unsigned short var_18 = (unsigned short)33181;
signed char var_19 = (signed char)-2;
unsigned char var_20 = (unsigned char)151;
unsigned int var_21 = 414921367U;
unsigned long long int var_22 = 4473120340220687776ULL;
unsigned char var_23 = (unsigned char)96;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)43235;
int var_26 = 1449994966;
unsigned int var_27 = 3087820374U;
unsigned short var_28 = (unsigned short)63034;
unsigned short arr_24 [18] ;
unsigned short arr_25 [18] [18] [18] [18] ;
_Bool arr_31 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (unsigned short)61718;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16349;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
