#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25084;
unsigned int var_1 = 2477660567U;
signed char var_2 = (signed char)-124;
int var_3 = -154050529;
signed char var_4 = (signed char)-109;
int var_5 = -1818827283;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)191;
unsigned char var_13 = (unsigned char)41;
long long int var_14 = -8396926198625985443LL;
long long int var_15 = -5870610992649400556LL;
unsigned int var_16 = 1256576976U;
int var_17 = 334969349;
signed char arr_2 [20] [20] ;
short arr_3 [20] ;
int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-25200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 728045185;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
