#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
long long int var_1 = 1338634272909460151LL;
int var_2 = 1573993349;
short var_3 = (short)14610;
_Bool var_4 = (_Bool)1;
int var_5 = -392653577;
unsigned int var_6 = 355442928U;
unsigned int var_7 = 193176586U;
unsigned short var_8 = (unsigned short)36460;
unsigned char var_9 = (unsigned char)221;
int zero = 0;
unsigned long long int var_11 = 909209888246207188ULL;
unsigned int var_12 = 1417698538U;
unsigned int var_13 = 4172470650U;
unsigned long long int var_14 = 6596408874269428158ULL;
short var_15 = (short)30618;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)6;
unsigned int var_18 = 1546902282U;
unsigned int var_19 = 3021592214U;
unsigned short arr_0 [17] ;
short arr_1 [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)55394;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-18068;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6823933060208324911ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
