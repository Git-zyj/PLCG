#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
int var_18 = -1751276561;
long long int var_19 = -8662663208849272662LL;
long long int var_20 = -8266219390406160225LL;
unsigned int var_21 = 2974258603U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 1748313013U;
unsigned long long int var_25 = 5667563271819632471ULL;
long long int var_26 = 2168068472033303849LL;
signed char arr_0 [16] ;
unsigned int arr_2 [16] ;
_Bool arr_3 [16] [16] ;
unsigned int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 184497508U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 3473865899U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
