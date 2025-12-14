#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43003;
long long int var_2 = 3307074737193383451LL;
unsigned short var_3 = (unsigned short)15022;
unsigned short var_6 = (unsigned short)21412;
long long int var_7 = 8638914894017227955LL;
unsigned int var_8 = 2874056U;
long long int var_17 = 938459548009966698LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8600052764042976948ULL;
unsigned long long int var_22 = 18324700347492092925ULL;
unsigned int var_23 = 4086471278U;
unsigned long long int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 7575026000277670880ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)54255;
}

void checksum() {
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
