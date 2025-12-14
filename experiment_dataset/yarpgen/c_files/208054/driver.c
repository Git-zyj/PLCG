#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 266754783440091111ULL;
int var_3 = -115101799;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)7042;
unsigned int var_6 = 1677546004U;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)246;
unsigned int var_11 = 3959397230U;
unsigned short var_12 = (unsigned short)6007;
unsigned long long int var_13 = 8359528808300040259ULL;
_Bool arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
