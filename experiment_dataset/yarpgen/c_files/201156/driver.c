#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
long long int var_2 = 5745363064733510891LL;
unsigned short var_3 = (unsigned short)65428;
unsigned long long int var_4 = 4087891215870114700ULL;
unsigned char var_6 = (unsigned char)237;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)39596;
unsigned long long int var_9 = 4267457783381791725ULL;
int var_10 = -1376652369;
unsigned char var_11 = (unsigned char)29;
int zero = 0;
unsigned short var_13 = (unsigned short)689;
unsigned int var_14 = 4162572012U;
unsigned char var_15 = (unsigned char)1;
short var_16 = (short)4145;
long long int var_17 = 7983288810979475712LL;
short arr_1 [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)838;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1724116841224256784LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
