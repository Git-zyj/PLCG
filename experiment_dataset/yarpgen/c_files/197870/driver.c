#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)13084;
unsigned short var_4 = (unsigned short)37484;
unsigned char var_9 = (unsigned char)193;
unsigned char var_12 = (unsigned char)185;
int zero = 0;
unsigned int var_19 = 4174519068U;
unsigned short var_20 = (unsigned short)39920;
unsigned char var_21 = (unsigned char)65;
unsigned char var_22 = (unsigned char)23;
long long int var_23 = 5132981946493563505LL;
long long int var_24 = -282959426634599890LL;
unsigned char var_25 = (unsigned char)225;
int var_26 = -777779449;
short var_27 = (short)-31088;
_Bool var_28 = (_Bool)0;
_Bool arr_1 [23] ;
_Bool arr_3 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 7467397057239306617ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
