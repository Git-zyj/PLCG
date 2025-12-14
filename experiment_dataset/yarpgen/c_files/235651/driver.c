#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3497275659U;
long long int var_4 = 912237250804695683LL;
int var_5 = 678389219;
unsigned int var_6 = 665046768U;
unsigned char var_7 = (unsigned char)221;
unsigned char var_9 = (unsigned char)177;
unsigned long long int var_10 = 18148653349217745920ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)162;
unsigned long long int var_12 = 3653477526847585510ULL;
signed char var_13 = (signed char)-9;
int arr_4 [10] ;
int arr_8 [10] [10] ;
unsigned char arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -802688488;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 61337045 : 905780551;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)197;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
