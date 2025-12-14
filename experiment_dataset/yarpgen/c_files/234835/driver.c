#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4322273294636890691ULL;
unsigned char var_1 = (unsigned char)70;
unsigned char var_2 = (unsigned char)177;
long long int var_3 = -8173051668599440811LL;
unsigned int var_4 = 4119918309U;
unsigned int var_6 = 1946724002U;
unsigned short var_7 = (unsigned short)18881;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)10032;
_Bool var_12 = (_Bool)1;
int var_13 = -492108071;
unsigned int var_14 = 760268270U;
unsigned short var_15 = (unsigned short)54869;
signed char var_16 = (signed char)12;
unsigned char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)177;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
