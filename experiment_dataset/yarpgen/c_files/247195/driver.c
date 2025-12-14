#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_7 = (signed char)-45;
unsigned short var_11 = (unsigned short)35887;
long long int var_12 = 3419082984794149389LL;
short var_17 = (short)18783;
int zero = 0;
unsigned short var_19 = (unsigned short)11746;
int var_20 = -2130028336;
short var_21 = (short)-20215;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
long long int arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 8797810482882292168LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)175;
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
