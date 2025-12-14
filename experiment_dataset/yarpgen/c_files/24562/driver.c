#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5468167455186201977LL;
unsigned char var_7 = (unsigned char)141;
int var_12 = -603385383;
unsigned short var_15 = (unsigned short)58893;
int zero = 0;
unsigned int var_18 = 1489780050U;
short var_19 = (short)-32382;
short var_20 = (short)26078;
unsigned char var_21 = (unsigned char)239;
unsigned int var_22 = 3022585790U;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4658222277888720073ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
