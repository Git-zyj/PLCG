#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned char var_2 = (unsigned char)182;
signed char var_5 = (signed char)-50;
short var_9 = (short)20635;
short var_10 = (short)-28501;
signed char var_14 = (signed char)126;
int zero = 0;
unsigned int var_16 = 4102919644U;
unsigned int var_17 = 594213872U;
long long int var_18 = -6059203328326511834LL;
unsigned char var_19 = (unsigned char)234;
long long int var_20 = -530954061158615016LL;
unsigned short var_21 = (unsigned short)23926;
unsigned char arr_0 [24] ;
_Bool arr_1 [24] ;
long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 959480467784503359LL;
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
