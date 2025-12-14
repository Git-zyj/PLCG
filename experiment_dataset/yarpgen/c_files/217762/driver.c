#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned char var_1 = (unsigned char)159;
unsigned char var_2 = (unsigned char)36;
unsigned char var_3 = (unsigned char)27;
unsigned char var_6 = (unsigned char)177;
signed char var_8 = (signed char)3;
unsigned char var_9 = (unsigned char)113;
unsigned char var_10 = (unsigned char)248;
signed char var_12 = (signed char)-59;
unsigned char var_13 = (unsigned char)222;
unsigned char var_14 = (unsigned char)104;
int zero = 0;
signed char var_15 = (signed char)-124;
unsigned char var_16 = (unsigned char)170;
unsigned char var_17 = (unsigned char)96;
signed char var_18 = (signed char)-15;
signed char arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)49;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
