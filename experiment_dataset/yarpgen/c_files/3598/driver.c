#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
signed char var_1 = (signed char)-66;
unsigned char var_3 = (unsigned char)35;
int var_4 = -426823070;
signed char var_5 = (signed char)-55;
int var_6 = -1830575221;
long long int var_7 = -1251979791998366369LL;
unsigned char var_8 = (unsigned char)190;
unsigned int var_9 = 2137402069U;
int zero = 0;
unsigned long long int var_10 = 2040945116140871088ULL;
unsigned int var_11 = 3129503836U;
unsigned char var_12 = (unsigned char)11;
unsigned char var_13 = (unsigned char)96;
unsigned char var_14 = (unsigned char)97;
unsigned int arr_1 [24] [24] ;
unsigned char arr_2 [24] [24] ;
unsigned char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2686225330U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
