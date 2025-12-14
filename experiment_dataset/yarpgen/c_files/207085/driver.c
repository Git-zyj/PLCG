#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 556352400;
long long int var_2 = -166396846917644554LL;
short var_3 = (short)-31682;
unsigned int var_4 = 1695796821U;
unsigned char var_5 = (unsigned char)162;
unsigned char var_6 = (unsigned char)217;
unsigned long long int var_7 = 8155688509746586756ULL;
int var_8 = 560659072;
short var_11 = (short)-12440;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-82;
long long int var_17 = 1211455544640430474LL;
long long int var_19 = -3795135313800848630LL;
int zero = 0;
int var_20 = 1876263609;
unsigned short var_21 = (unsigned short)41157;
short var_22 = (short)3067;
long long int var_23 = -2346295799053437735LL;
int var_24 = -60180922;
long long int var_25 = 11155658490514470LL;
unsigned short var_26 = (unsigned short)29438;
unsigned long long int var_27 = 5853681320878033589ULL;
unsigned short arr_15 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)52226;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
