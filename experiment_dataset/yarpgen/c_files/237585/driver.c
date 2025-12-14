#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48635;
signed char var_1 = (signed char)-125;
unsigned long long int var_3 = 12560488991318001617ULL;
unsigned short var_5 = (unsigned short)17603;
long long int var_6 = -5331403456566318990LL;
unsigned int var_7 = 2726028713U;
signed char var_9 = (signed char)71;
int zero = 0;
unsigned short var_10 = (unsigned short)44289;
unsigned long long int var_11 = 13233182783504457224ULL;
signed char var_12 = (signed char)-86;
unsigned char var_13 = (unsigned char)146;
unsigned long long int var_14 = 6239665226390213702ULL;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)49951;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
