#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
long long int var_2 = -4245532679866485447LL;
unsigned char var_3 = (unsigned char)38;
unsigned int var_4 = 283756175U;
short var_5 = (short)-28594;
unsigned int var_9 = 1405662828U;
short var_10 = (short)111;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)42;
unsigned long long int var_19 = 1346269998598620847ULL;
int zero = 0;
unsigned int var_20 = 923489870U;
unsigned short var_21 = (unsigned short)31689;
unsigned char var_22 = (unsigned char)65;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3630724008U;
unsigned char var_25 = (unsigned char)58;
unsigned short var_26 = (unsigned short)52942;
signed char var_27 = (signed char)126;
unsigned char arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)143;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
