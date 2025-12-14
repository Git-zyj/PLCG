#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
unsigned int var_3 = 1420768664U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 2401235067109019522ULL;
unsigned int var_7 = 206517764U;
long long int var_10 = 4742592240833659233LL;
unsigned int var_11 = 1690587598U;
long long int var_12 = 6117144402941859387LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 163309079U;
signed char var_15 = (signed char)-44;
signed char var_16 = (signed char)79;
int var_17 = 1739559805;
unsigned int arr_4 [11] [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4117597137U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 14718055256910933573ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -1114312107;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
