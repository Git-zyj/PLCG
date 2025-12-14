#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
int var_2 = -457668788;
unsigned int var_3 = 1145891502U;
unsigned char var_6 = (unsigned char)170;
long long int var_7 = -3636712813279913200LL;
long long int var_10 = 7175054376021866675LL;
int zero = 0;
signed char var_11 = (signed char)-126;
short var_12 = (short)2844;
long long int var_13 = 7247748237552381695LL;
signed char var_14 = (signed char)125;
unsigned long long int var_15 = 12901986685799475928ULL;
unsigned char arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
