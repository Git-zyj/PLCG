#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1336479591;
unsigned char var_2 = (unsigned char)227;
int var_4 = -375478729;
unsigned short var_13 = (unsigned short)60100;
short var_16 = (short)-32025;
int zero = 0;
signed char var_18 = (signed char)72;
unsigned long long int var_19 = 17490916963967647762ULL;
unsigned char var_20 = (unsigned char)143;
signed char var_21 = (signed char)48;
unsigned char var_22 = (unsigned char)41;
long long int var_23 = -7081996601773351101LL;
unsigned short arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40973;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2886179290119871082ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1551735029 : -1479775836;
}

void checksum() {
    hash(&seed, var_18);
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
