#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
_Bool var_3 = (_Bool)1;
int var_4 = -1236522066;
int var_5 = -1297579996;
signed char var_7 = (signed char)54;
long long int var_8 = 5658317127986672689LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = -1993616481;
int zero = 0;
unsigned long long int var_13 = 12494390886139301198ULL;
unsigned char var_14 = (unsigned char)1;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7546775555613258150LL;
short arr_0 [23] [23] ;
long long int arr_2 [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)20158 : (short)634;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3857323954731973942LL : 1892862100270360820LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -500498877941628590LL : -1619891291430295448LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
