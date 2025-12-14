#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3407510176132645586ULL;
short var_6 = (short)24140;
unsigned long long int var_7 = 8045730594049835664ULL;
unsigned short var_10 = (unsigned short)34055;
unsigned short var_13 = (unsigned short)861;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_20 = (short)26108;
signed char var_21 = (signed char)96;
short var_22 = (short)7609;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)135;
unsigned char arr_1 [23] ;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 9557043396249295894ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
