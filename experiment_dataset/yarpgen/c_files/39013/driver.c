#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4230639414U;
unsigned int var_2 = 3351967072U;
unsigned char var_3 = (unsigned char)215;
long long int var_4 = 2669124663502644759LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8523822610102840690LL;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)226;
long long int var_16 = 2183403722313216930LL;
unsigned short var_19 = (unsigned short)24266;
int zero = 0;
long long int var_20 = 3794396133783762310LL;
unsigned int var_21 = 515709933U;
unsigned int var_22 = 3183193511U;
signed char var_23 = (signed char)-98;
signed char var_24 = (signed char)40;
unsigned int arr_2 [24] ;
long long int arr_4 [24] [24] ;
long long int arr_6 [24] [24] [24] ;
unsigned int arr_8 [24] ;
signed char arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 201181658U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 6084141281485463901LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 974875414160634403LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 938378283U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)56;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
