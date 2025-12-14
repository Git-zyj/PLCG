#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14335804908249270436ULL;
unsigned int var_2 = 507738759U;
int var_3 = 1089627509;
signed char var_4 = (signed char)54;
unsigned short var_7 = (unsigned short)54967;
int var_8 = 1430070514;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 1715329171869052012ULL;
int zero = 0;
unsigned int var_13 = 2141367473U;
signed char var_14 = (signed char)-91;
unsigned short var_15 = (unsigned short)25519;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int arr_0 [19] ;
unsigned char arr_2 [19] ;
_Bool arr_12 [19] [19] [19] [19] ;
int arr_13 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 620470450 : -1609726465;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -1329640892 : 246780475;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
