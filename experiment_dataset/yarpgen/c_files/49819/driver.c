#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6965539981232721198ULL;
unsigned short var_7 = (unsigned short)54401;
unsigned short var_8 = (unsigned short)39506;
unsigned int var_10 = 2810035355U;
int zero = 0;
unsigned long long int var_17 = 7848636142903365698ULL;
unsigned long long int var_18 = 9723626376816108152ULL;
long long int var_19 = 2060564865809482554LL;
unsigned char var_20 = (unsigned char)32;
unsigned short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)10138;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
