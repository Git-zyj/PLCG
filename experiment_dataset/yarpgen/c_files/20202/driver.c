#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16310465803317131768ULL;
signed char var_3 = (signed char)110;
unsigned int var_6 = 233247527U;
unsigned char var_7 = (unsigned char)200;
unsigned long long int var_9 = 15092277804726280842ULL;
long long int var_11 = 6408635916686240996LL;
long long int var_13 = -2707147019648756281LL;
unsigned int var_14 = 3220373609U;
int zero = 0;
short var_16 = (short)-4945;
long long int var_17 = 3486901494901196859LL;
short var_18 = (short)10471;
int var_19 = 426146739;
long long int var_20 = -454821784496269797LL;
long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 87159850273565175LL : -3151404756175492757LL;
}

void checksum() {
    hash(&seed, var_16);
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
