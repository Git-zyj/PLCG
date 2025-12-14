#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23314;
unsigned char var_6 = (unsigned char)87;
int zero = 0;
signed char var_16 = (signed char)-35;
signed char var_17 = (signed char)13;
unsigned long long int var_18 = 7950135078660750737ULL;
short var_19 = (short)-21542;
unsigned short var_20 = (unsigned short)61607;
unsigned long long int arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 5857189428675809998ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)54600;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
