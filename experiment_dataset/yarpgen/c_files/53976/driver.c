#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned char var_1 = (unsigned char)109;
unsigned int var_2 = 386381499U;
int var_3 = -699457107;
unsigned char var_4 = (unsigned char)123;
unsigned char var_5 = (unsigned char)181;
unsigned char var_6 = (unsigned char)253;
unsigned char var_7 = (unsigned char)130;
int var_8 = -677338312;
unsigned int var_9 = 1564627752U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)119;
unsigned char var_12 = (unsigned char)20;
unsigned char var_13 = (unsigned char)110;
unsigned char var_14 = (unsigned char)47;
unsigned short var_15 = (unsigned short)7795;
_Bool arr_0 [24] ;
int arr_2 [24] ;
_Bool arr_3 [24] ;
unsigned char arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -181935623;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)144;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
