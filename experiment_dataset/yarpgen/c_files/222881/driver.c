#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8878469008961608281LL;
short var_2 = (short)28751;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -1448978528858655665LL;
unsigned long long int var_12 = 963051988482943278ULL;
unsigned long long int var_13 = 16199633461015165573ULL;
unsigned int var_14 = 3217997181U;
unsigned long long int var_15 = 4464924993625039174ULL;
short arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-1634;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)119;
}

void checksum() {
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
