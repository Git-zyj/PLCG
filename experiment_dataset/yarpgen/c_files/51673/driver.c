#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
long long int var_4 = 4419883632434464480LL;
long long int var_5 = -8189131711142557279LL;
long long int var_8 = 1653525371358561433LL;
unsigned short var_9 = (unsigned short)6823;
unsigned int var_10 = 2987852995U;
signed char var_11 = (signed char)-70;
int zero = 0;
unsigned short var_12 = (unsigned short)46403;
unsigned short var_13 = (unsigned short)44738;
_Bool var_14 = (_Bool)0;
_Bool arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
