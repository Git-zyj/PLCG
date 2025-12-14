#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26238;
unsigned char var_3 = (unsigned char)16;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 15025199622175197417ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12876538395339493679ULL;
unsigned int var_12 = 1724923632U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)254;
unsigned long long int var_15 = 14652808628332807060ULL;
int arr_0 [25] ;
_Bool arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -2047665710;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
