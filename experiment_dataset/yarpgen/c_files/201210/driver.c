#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 61421907538654862ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)39415;
int zero = 0;
unsigned int var_13 = 3733693039U;
long long int var_14 = -7061288433412670879LL;
long long int var_15 = -6039852811312089569LL;
unsigned int var_16 = 3855403094U;
unsigned char arr_0 [23] [23] ;
_Bool arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
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
