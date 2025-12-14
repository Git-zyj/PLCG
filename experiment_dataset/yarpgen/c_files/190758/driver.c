#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8032753243541842530ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_12 = 4138568120U;
unsigned char var_19 = (unsigned char)242;
int zero = 0;
int var_20 = -572146372;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10463917388230986383ULL;
unsigned char var_23 = (unsigned char)192;
unsigned int var_24 = 3525110364U;
unsigned long long int arr_0 [24] [24] ;
unsigned int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 16715747946218321294ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 395694351U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
