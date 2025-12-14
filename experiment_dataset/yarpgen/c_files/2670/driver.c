#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52986;
long long int var_1 = -4054672693479913891LL;
signed char var_5 = (signed char)68;
signed char var_6 = (signed char)-35;
_Bool var_7 = (_Bool)0;
long long int var_8 = 7200772105268248700LL;
unsigned int var_12 = 3369265170U;
long long int var_13 = 5295680388958035024LL;
int zero = 0;
int var_15 = 537057638;
unsigned char var_16 = (unsigned char)235;
signed char var_17 = (signed char)-94;
unsigned int var_18 = 3243715472U;
unsigned short var_19 = (unsigned short)40210;
int var_20 = 1449855756;
int var_21 = -1270281723;
unsigned long long int var_22 = 11153045203980025009ULL;
signed char var_23 = (signed char)56;
int var_24 = 519095451;
signed char var_25 = (signed char)94;
unsigned int var_26 = 3189074944U;
signed char var_27 = (signed char)-35;
long long int arr_1 [10] [10] ;
unsigned short arr_3 [10] [10] ;
_Bool arr_13 [16] [16] ;
long long int arr_19 [16] [16] [16] [16] ;
signed char arr_20 [16] [16] [16] [16] ;
int arr_24 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -4437550948986518290LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)54314;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 1843148424863043231LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1126854923 : -1180471008;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
