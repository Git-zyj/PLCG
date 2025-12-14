#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65422;
short var_3 = (short)-3355;
int var_8 = -33370179;
unsigned long long int var_15 = 4929051427363855808ULL;
signed char var_16 = (signed char)-55;
signed char var_18 = (signed char)-33;
int zero = 0;
int var_19 = 1161110511;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)170;
unsigned long long int var_22 = 47765868234042362ULL;
unsigned char arr_0 [25] ;
long long int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1222554797715796914LL;
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
