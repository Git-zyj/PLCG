#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)70;
unsigned long long int var_3 = 11464424411940863538ULL;
int var_5 = 1855269481;
unsigned long long int var_7 = 17552716457244509360ULL;
unsigned int var_10 = 3843702477U;
_Bool var_12 = (_Bool)1;
int var_13 = -2035242617;
short var_14 = (short)23180;
int zero = 0;
short var_15 = (short)-5877;
unsigned int var_16 = 1954323050U;
signed char var_17 = (signed char)1;
unsigned char var_18 = (unsigned char)18;
unsigned int arr_0 [22] ;
unsigned int arr_5 [22] [22] ;
unsigned int arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3408895017U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2109515394U : 2272260700U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1003891385U;
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
