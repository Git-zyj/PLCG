#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1722181787U;
unsigned char var_3 = (unsigned char)54;
unsigned long long int var_4 = 15014232618951161940ULL;
signed char var_5 = (signed char)-13;
unsigned long long int var_6 = 11766894889643226605ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)33990;
unsigned short var_11 = (unsigned short)3604;
int zero = 0;
signed char var_12 = (signed char)-86;
_Bool var_13 = (_Bool)1;
short var_14 = (short)21535;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)115;
unsigned int var_17 = 806812028U;
_Bool var_18 = (_Bool)1;
long long int arr_0 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1899585110837031254LL;
}

void checksum() {
    hash(&seed, var_12);
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
