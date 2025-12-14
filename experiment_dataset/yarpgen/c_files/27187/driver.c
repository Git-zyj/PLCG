#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 319936082;
unsigned short var_8 = (unsigned short)6658;
long long int var_9 = -5330664631162944962LL;
unsigned short var_10 = (unsigned short)10104;
int zero = 0;
unsigned long long int var_13 = 3233105294871520099ULL;
int var_14 = 1696308675;
int var_15 = -297392649;
short var_16 = (short)-32330;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 16979740760390171317ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
