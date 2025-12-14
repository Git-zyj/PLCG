#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)217;
int var_6 = -1911911131;
unsigned char var_11 = (unsigned char)138;
signed char var_14 = (signed char)93;
int zero = 0;
unsigned long long int var_20 = 9225812470862015704ULL;
signed char var_21 = (signed char)117;
signed char var_22 = (signed char)116;
unsigned int var_23 = 2774457109U;
signed char var_24 = (signed char)-70;
int arr_2 [24] [24] [24] ;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1273289903;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
