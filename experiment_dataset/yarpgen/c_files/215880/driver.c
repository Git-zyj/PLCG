#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 850698188;
unsigned int var_4 = 813682786U;
short var_6 = (short)26744;
unsigned short var_10 = (unsigned short)7838;
int zero = 0;
unsigned int var_13 = 2676820241U;
unsigned char var_14 = (unsigned char)37;
unsigned int var_15 = 3524420557U;
unsigned int var_16 = 1324832259U;
unsigned long long int var_17 = 15969401178663280782ULL;
unsigned short var_18 = (unsigned short)42134;
short arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_5 [12] ;
unsigned long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)11612;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3411229969U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 8471350807825186652ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3003272143707783847ULL : 1371725169978258256ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 13463031422793031085ULL : 9943584430809921158ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
