#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 934660495;
unsigned int var_9 = 3255498420U;
int var_10 = -1431066506;
unsigned int var_13 = 4100931465U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 8488504941818976584ULL;
unsigned char var_17 = (unsigned char)228;
int var_18 = -748250947;
unsigned char var_19 = (unsigned char)49;
unsigned long long int var_20 = 11449304983572000750ULL;
_Bool arr_0 [18] [18] ;
int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 616465830;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
