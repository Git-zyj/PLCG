#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4812;
int var_1 = 613216429;
unsigned short var_7 = (unsigned short)38700;
int var_8 = 1605739469;
unsigned char var_9 = (unsigned char)54;
int var_10 = -779844312;
int zero = 0;
long long int var_13 = 5183187492157726202LL;
long long int var_14 = -185659555738766724LL;
short var_15 = (short)-4837;
_Bool var_16 = (_Bool)0;
short var_17 = (short)31580;
unsigned char var_18 = (unsigned char)74;
short var_19 = (short)-2917;
int var_20 = 361599954;
unsigned int var_21 = 1368460435U;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
