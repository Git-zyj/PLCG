#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1670180314U;
unsigned char var_9 = (unsigned char)234;
signed char var_10 = (signed char)89;
signed char var_13 = (signed char)(-127 - 1);
unsigned int var_14 = 1933395351U;
int zero = 0;
unsigned int var_16 = 3521574888U;
signed char var_17 = (signed char)77;
long long int var_18 = -1819347355900211852LL;
int var_19 = -2057933806;
unsigned int var_20 = 3635072851U;
unsigned int var_21 = 1645564853U;
_Bool var_22 = (_Bool)0;
unsigned int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned char arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 572022649U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4147314052U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)180;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
