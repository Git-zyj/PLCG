#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1957116504966225324ULL;
short var_8 = (short)26501;
unsigned int var_9 = 2296195962U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 1006355131630810667ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)8231;
_Bool var_15 = (_Bool)1;
int var_16 = 804708205;
unsigned short var_17 = (unsigned short)54900;
unsigned short var_18 = (unsigned short)42453;
unsigned char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)178;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
