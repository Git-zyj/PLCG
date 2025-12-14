#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11944414374837687423ULL;
unsigned long long int var_1 = 3420690821658801628ULL;
long long int var_8 = -8267546375377088698LL;
signed char var_9 = (signed char)47;
unsigned char var_10 = (unsigned char)27;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 542571393U;
int var_16 = -19175770;
int zero = 0;
unsigned int var_17 = 3168654931U;
unsigned int var_18 = 3903819625U;
unsigned int var_19 = 1374189766U;
unsigned int var_20 = 3305070503U;
unsigned long long int var_21 = 7736731118748335944ULL;
_Bool arr_2 [13] ;
int arr_3 [13] [13] [13] ;
_Bool arr_4 [13] [13] ;
unsigned int arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2080297805;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1339851086U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
