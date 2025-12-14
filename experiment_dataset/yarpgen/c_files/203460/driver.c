#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8943371654588721191ULL;
unsigned short var_2 = (unsigned short)8959;
int var_3 = 1526958082;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 18150602361107625407ULL;
unsigned char var_9 = (unsigned char)206;
unsigned char var_10 = (unsigned char)107;
unsigned int var_14 = 441168909U;
signed char var_16 = (signed char)52;
unsigned int var_17 = 3725927997U;
int zero = 0;
int var_18 = -1058490799;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3972344970U;
unsigned long long int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7102248257346184856ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2801846544U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
