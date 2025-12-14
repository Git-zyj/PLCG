#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
int var_1 = 1707351681;
long long int var_2 = -2366753086269034974LL;
unsigned short var_3 = (unsigned short)3044;
unsigned int var_6 = 2716544720U;
unsigned short var_7 = (unsigned short)61977;
unsigned short var_10 = (unsigned short)56381;
short var_14 = (short)3961;
int var_15 = 1094860646;
unsigned long long int var_17 = 10223003435855223963ULL;
int zero = 0;
int var_19 = -675259221;
unsigned int var_20 = 1222042214U;
unsigned int var_21 = 1888555340U;
int var_22 = 220474658;
int arr_2 [19] [19] ;
unsigned short arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -1807365975 : -1909082140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)14618;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
