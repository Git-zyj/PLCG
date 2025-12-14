#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5293660409049612983LL;
short var_4 = (short)17313;
unsigned short var_5 = (unsigned short)34244;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)27520;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)14701;
unsigned short var_14 = (unsigned short)47339;
long long int var_15 = 8247057664293898738LL;
unsigned char var_16 = (unsigned char)1;
unsigned int var_17 = 2450363748U;
short var_18 = (short)-1350;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1922876894358548496ULL : 2636715440822614786ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
