#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1529100059;
int var_1 = -1885045299;
unsigned short var_2 = (unsigned short)48467;
unsigned int var_3 = 3950553423U;
unsigned char var_4 = (unsigned char)10;
int var_5 = 1769816938;
signed char var_7 = (signed char)-124;
unsigned short var_8 = (unsigned short)53980;
int zero = 0;
unsigned int var_10 = 3554005982U;
unsigned char var_11 = (unsigned char)36;
unsigned long long int var_12 = 4622164516599035302ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-2;
unsigned short var_15 = (unsigned short)60716;
long long int arr_1 [15] ;
unsigned short arr_3 [15] ;
int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 5226183970491989167LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)4770;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -399199393;
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
