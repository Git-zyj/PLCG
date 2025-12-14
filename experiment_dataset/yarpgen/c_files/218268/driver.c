#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2529769240400090456LL;
unsigned short var_1 = (unsigned short)38044;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 16304596826088126762ULL;
unsigned short var_5 = (unsigned short)12668;
unsigned short var_6 = (unsigned short)21821;
int var_9 = 236571881;
int zero = 0;
unsigned char var_17 = (unsigned char)198;
unsigned short var_18 = (unsigned short)29071;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7292111242916280393LL;
unsigned char var_21 = (unsigned char)178;
long long int var_22 = 5909758200211278151LL;
signed char var_23 = (signed char)41;
unsigned long long int arr_4 [16] [16] ;
long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 4120985111224098450ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2593067628695570692LL : -5879320862991768290LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
