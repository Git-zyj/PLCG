#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
signed char var_2 = (signed char)110;
unsigned short var_3 = (unsigned short)32110;
unsigned long long int var_4 = 17965268775883802114ULL;
short var_8 = (short)4167;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)182;
unsigned char var_11 = (unsigned char)206;
int zero = 0;
unsigned char var_12 = (unsigned char)210;
unsigned char var_13 = (unsigned char)204;
signed char var_14 = (signed char)69;
_Bool var_15 = (_Bool)0;
unsigned short arr_1 [22] ;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)50374;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)99;
}

void checksum() {
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
