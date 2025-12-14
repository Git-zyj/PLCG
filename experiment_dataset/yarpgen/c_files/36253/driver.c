#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)205;
int var_3 = -805711509;
unsigned long long int var_4 = 18335468432328658200ULL;
unsigned int var_6 = 2416696110U;
signed char var_7 = (signed char)58;
signed char var_9 = (signed char)96;
unsigned char var_11 = (unsigned char)49;
unsigned short var_18 = (unsigned short)13618;
int zero = 0;
unsigned short var_20 = (unsigned short)51282;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)29;
unsigned int var_23 = 1313128098U;
signed char var_24 = (signed char)-87;
unsigned char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)42;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
