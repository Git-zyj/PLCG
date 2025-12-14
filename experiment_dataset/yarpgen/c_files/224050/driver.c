#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6337889197390111289LL;
unsigned short var_2 = (unsigned short)25253;
unsigned char var_6 = (unsigned char)13;
long long int var_7 = -2740766573302310226LL;
long long int var_9 = 5102414697666275438LL;
signed char var_11 = (signed char)-46;
unsigned int var_12 = 3681174807U;
int var_14 = -2127945892;
unsigned char var_16 = (unsigned char)38;
int zero = 0;
int var_19 = -986848036;
signed char var_20 = (signed char)54;
unsigned char var_21 = (unsigned char)125;
unsigned char var_22 = (unsigned char)3;
_Bool arr_1 [14] ;
signed char arr_2 [14] ;
unsigned int arr_3 [14] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3073164489U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1450373047;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
