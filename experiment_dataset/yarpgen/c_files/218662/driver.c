#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)11;
unsigned long long int var_2 = 15854080526014712363ULL;
unsigned int var_3 = 3286119486U;
unsigned short var_5 = (unsigned short)50487;
short var_6 = (short)2410;
int var_10 = -1221001474;
int zero = 0;
short var_13 = (short)21222;
unsigned long long int var_14 = 5302612014253604360ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)95;
unsigned int var_17 = 373280862U;
unsigned int var_18 = 3447455496U;
unsigned short var_19 = (unsigned short)58306;
int var_20 = -741009777;
short arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)229;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
