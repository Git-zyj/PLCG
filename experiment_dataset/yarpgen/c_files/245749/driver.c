#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
long long int var_2 = 8031029417274323498LL;
signed char var_3 = (signed char)60;
signed char var_4 = (signed char)110;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2118742232809357298LL;
unsigned char var_8 = (unsigned char)55;
unsigned int var_9 = 1237668451U;
int zero = 0;
unsigned long long int var_14 = 4637747698315456147ULL;
unsigned int var_15 = 432671081U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9600747161795527642ULL;
signed char var_18 = (signed char)67;
signed char var_19 = (signed char)93;
int arr_0 [16] ;
signed char arr_1 [16] [16] ;
int arr_2 [16] [16] ;
int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 539015051;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1476969914;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1611794924;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
