#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11798;
signed char var_4 = (signed char)69;
signed char var_6 = (signed char)-16;
unsigned long long int var_7 = 14925348042235353500ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)7713;
int var_17 = 2085742616;
int var_18 = 1562374916;
short var_19 = (short)23505;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3625081169610999974LL;
unsigned long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2784479520787906236ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
