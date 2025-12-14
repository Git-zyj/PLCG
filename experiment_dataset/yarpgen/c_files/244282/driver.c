#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
signed char var_2 = (signed char)93;
signed char var_8 = (signed char)27;
short var_11 = (short)-1344;
signed char var_17 = (signed char)-76;
short var_18 = (short)8614;
int zero = 0;
signed char var_19 = (signed char)13;
short var_20 = (short)1316;
unsigned char var_21 = (unsigned char)207;
unsigned char arr_0 [14] ;
signed char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)51;
}

void checksum() {
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
