#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned long long int var_7 = 3956893629904818873ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)250;
unsigned int var_16 = 4145799516U;
int zero = 0;
unsigned long long int var_17 = 8114905111969508296ULL;
unsigned int var_18 = 3032306793U;
int var_19 = -1804488444;
_Bool var_20 = (_Bool)0;
long long int arr_0 [16] ;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6316677486523869741LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1701383928;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
