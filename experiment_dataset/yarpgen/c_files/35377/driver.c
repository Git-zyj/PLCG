#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
unsigned int var_3 = 2863329272U;
signed char var_4 = (signed char)49;
unsigned short var_6 = (unsigned short)37135;
unsigned long long int var_8 = 6001289406100785520ULL;
int var_11 = -1264996449;
unsigned char var_12 = (unsigned char)234;
unsigned char var_13 = (unsigned char)90;
unsigned char var_19 = (unsigned char)54;
int zero = 0;
unsigned int var_20 = 1709640518U;
unsigned short var_21 = (unsigned short)36316;
signed char var_22 = (signed char)25;
signed char var_23 = (signed char)26;
unsigned int var_24 = 513892952U;
int arr_0 [16] [16] ;
unsigned char arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -1789211569 : 109320584;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26865 : (unsigned short)15835;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
