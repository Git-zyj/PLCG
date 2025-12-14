#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 923745170;
long long int var_1 = -7653245140047285080LL;
signed char var_2 = (signed char)-103;
unsigned int var_3 = 2996861058U;
signed char var_5 = (signed char)-65;
long long int var_8 = 3844214400578874220LL;
int var_9 = -948130679;
int zero = 0;
unsigned int var_10 = 2779099265U;
unsigned short var_11 = (unsigned short)30598;
long long int var_12 = 7530805270550573369LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15457790817025624299ULL;
short var_15 = (short)-12904;
short arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)9497;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3221307870U;
}

void checksum() {
    hash(&seed, var_10);
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
