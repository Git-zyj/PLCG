#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned char var_1 = (unsigned char)218;
unsigned char var_2 = (unsigned char)150;
signed char var_4 = (signed char)90;
unsigned char var_5 = (unsigned char)0;
unsigned char var_6 = (unsigned char)100;
unsigned long long int var_7 = 772304697809709036ULL;
int var_8 = 514358606;
int zero = 0;
long long int var_10 = -4653693025087946038LL;
signed char var_11 = (signed char)-10;
unsigned char var_12 = (unsigned char)163;
short var_13 = (short)16276;
unsigned char var_14 = (unsigned char)187;
short var_15 = (short)-8197;
_Bool arr_1 [22] ;
short arr_2 [22] ;
_Bool arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)14521;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
