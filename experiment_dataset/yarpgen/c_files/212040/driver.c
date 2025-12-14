#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13405681075505218576ULL;
long long int var_2 = 9038023696416252145LL;
unsigned long long int var_7 = 16159350427599382048ULL;
long long int var_13 = 900701645484337931LL;
int zero = 0;
long long int var_15 = -4378388292310481423LL;
long long int var_16 = 493810922507342156LL;
unsigned long long int var_17 = 13669964687083594052ULL;
unsigned long long int var_18 = 9558359283898324157ULL;
long long int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
long long int arr_2 [23] ;
unsigned long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 208491247068302385LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 4025217080715621855ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 5607842497642396280LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 11717232623915550747ULL : 16737325390868467150ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
