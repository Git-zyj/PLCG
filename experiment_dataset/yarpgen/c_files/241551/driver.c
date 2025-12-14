#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8223357710701439278ULL;
signed char var_7 = (signed char)93;
long long int var_11 = 9063982994517491546LL;
long long int var_14 = 5516704821051620238LL;
unsigned long long int var_15 = 15996091857432392239ULL;
unsigned char var_17 = (unsigned char)92;
unsigned short var_18 = (unsigned short)51972;
int zero = 0;
unsigned int var_19 = 3128517632U;
short var_20 = (short)-3104;
short var_21 = (short)18985;
short var_22 = (short)-7920;
short var_23 = (short)-13914;
long long int arr_1 [19] ;
signed char arr_2 [19] ;
_Bool arr_3 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1728581246140908156LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
