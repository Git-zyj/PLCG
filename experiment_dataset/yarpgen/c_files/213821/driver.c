#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8318102450627985431LL;
long long int var_2 = -4265973276599639175LL;
unsigned char var_3 = (unsigned char)55;
unsigned char var_5 = (unsigned char)16;
unsigned short var_6 = (unsigned short)18237;
int var_9 = 324633536;
int var_10 = -1788647741;
long long int var_11 = 4380374255382402607LL;
int zero = 0;
long long int var_12 = -6993988910187500579LL;
_Bool var_13 = (_Bool)1;
int var_14 = -1504279463;
short var_15 = (short)-1375;
unsigned char var_16 = (unsigned char)212;
unsigned int arr_0 [16] [16] ;
_Bool arr_2 [16] [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 2362597855U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
