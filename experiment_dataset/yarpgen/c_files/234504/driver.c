#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)119;
int var_3 = -305585140;
short var_5 = (short)-19824;
_Bool var_6 = (_Bool)0;
int var_8 = 953890851;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_16 = (short)-22698;
unsigned char var_17 = (unsigned char)177;
int zero = 0;
int var_18 = -385459473;
short var_19 = (short)-16729;
int var_20 = 937860845;
unsigned char var_21 = (unsigned char)131;
_Bool var_22 = (_Bool)1;
int var_23 = -328228947;
_Bool arr_0 [17] [17] ;
short arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-24488;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
