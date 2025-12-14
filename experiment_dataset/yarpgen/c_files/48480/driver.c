#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3938962849914459336ULL;
unsigned long long int var_1 = 8175524659764114120ULL;
unsigned short var_2 = (unsigned short)42814;
unsigned long long int var_3 = 16050128749105828709ULL;
unsigned long long int var_4 = 1838482339797042367ULL;
unsigned long long int var_6 = 4949119887905862660ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)59437;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)65386;
unsigned short var_13 = (unsigned short)22634;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5792654820525931810ULL;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2868882416843590013ULL;
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
