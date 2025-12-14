#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)187;
unsigned char var_6 = (unsigned char)245;
int zero = 0;
unsigned int var_12 = 2594879367U;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4702877723100751818LL;
long long int var_15 = -1603362871312307056LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)187;
long long int var_18 = -5316135304109471985LL;
unsigned char var_19 = (unsigned char)20;
short var_20 = (short)13279;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9809752237234001132ULL;
unsigned char var_23 = (unsigned char)176;
int arr_1 [16] [16] ;
short arr_2 [16] ;
unsigned short arr_3 [14] [14] ;
long long int arr_5 [18] [18] ;
long long int arr_6 [18] ;
unsigned long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -686756863;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-20001;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)16905;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -380838198697597328LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 7994215136370181043LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 11075401831035978368ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
