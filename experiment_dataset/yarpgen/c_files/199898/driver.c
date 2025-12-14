#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_7 = 1153269664705457906ULL;
unsigned char var_14 = (unsigned char)192;
long long int var_17 = -9172983766783271470LL;
int zero = 0;
signed char var_18 = (signed char)65;
unsigned int var_19 = 3178241351U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)32;
long long int var_23 = 713503701839077716LL;
long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8600934577650268075LL : -6878380884207708754LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
