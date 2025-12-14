#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned int var_2 = 3395760133U;
unsigned int var_4 = 277420125U;
unsigned int var_5 = 95778961U;
unsigned int var_7 = 967272024U;
unsigned int var_9 = 814222803U;
unsigned int var_12 = 893598233U;
unsigned short var_13 = (unsigned short)38739;
int zero = 0;
unsigned int var_16 = 259419039U;
long long int var_17 = -4173620619979773716LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)9148;
unsigned short var_20 = (unsigned short)31441;
unsigned int var_21 = 2042647268U;
unsigned short var_22 = (unsigned short)34064;
unsigned char var_23 = (unsigned char)120;
unsigned int var_24 = 485836070U;
_Bool arr_3 [18] ;
unsigned short arr_9 [18] [18] [18] [18] ;
unsigned int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)40778;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1598504038U : 2074706905U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
