#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 674937130U;
signed char var_3 = (signed char)123;
unsigned short var_5 = (unsigned short)49322;
signed char var_6 = (signed char)107;
unsigned short var_7 = (unsigned short)41689;
short var_8 = (short)27669;
signed char var_12 = (signed char)-119;
unsigned char var_13 = (unsigned char)110;
unsigned int var_14 = 795130956U;
unsigned char var_15 = (unsigned char)79;
long long int var_16 = 1144302918616976474LL;
int zero = 0;
unsigned char var_18 = (unsigned char)147;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-1593;
unsigned short var_21 = (unsigned short)14959;
short var_22 = (short)-11218;
unsigned int var_23 = 1862950877U;
unsigned char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)254;
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
