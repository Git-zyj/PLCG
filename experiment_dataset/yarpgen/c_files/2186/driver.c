#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3006714247U;
int var_3 = -1159430122;
long long int var_5 = -2384759399647510277LL;
int var_6 = 1618041714;
signed char var_7 = (signed char)7;
int var_9 = 460666720;
unsigned int var_13 = 3645616541U;
int zero = 0;
unsigned int var_14 = 1616390430U;
unsigned short var_15 = (unsigned short)2900;
unsigned int var_16 = 236728022U;
unsigned char var_17 = (unsigned char)142;
unsigned short var_18 = (unsigned short)11440;
_Bool arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
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
