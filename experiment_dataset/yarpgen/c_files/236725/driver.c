#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60696;
short var_1 = (short)-14416;
int var_2 = -1167313036;
int var_3 = 1439923923;
unsigned short var_4 = (unsigned short)58651;
unsigned char var_6 = (unsigned char)118;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5648915092198390645LL;
int var_13 = 2060450599;
int var_14 = -1376602856;
long long int var_15 = -1449633269542723858LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13384299738397965962ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16809180655317427559ULL;
unsigned long long int var_23 = 15041885929576373795ULL;
unsigned int var_24 = 2401649869U;
int arr_2 [12] [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1088916976;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
