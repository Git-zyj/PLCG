#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
int var_2 = 641807023;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 1577387718201196472ULL;
int var_15 = 1627089185;
unsigned short var_18 = (unsigned short)10792;
unsigned int var_19 = 256631776U;
int zero = 0;
unsigned char var_20 = (unsigned char)185;
unsigned long long int var_21 = 6314220726127968127ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)80;
unsigned char arr_5 [16] [16] [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)-52;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
