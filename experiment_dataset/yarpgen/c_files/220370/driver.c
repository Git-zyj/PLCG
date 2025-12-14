#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4124;
unsigned long long int var_4 = 2882178907511625258ULL;
unsigned char var_9 = (unsigned char)135;
short var_10 = (short)6466;
unsigned char var_12 = (unsigned char)90;
int zero = 0;
signed char var_20 = (signed char)-19;
unsigned long long int var_21 = 15848672976098444782ULL;
short var_22 = (short)-31216;
short var_23 = (short)28154;
int arr_0 [11] ;
_Bool arr_1 [11] ;
signed char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 712890387;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-5;
}

void checksum() {
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
