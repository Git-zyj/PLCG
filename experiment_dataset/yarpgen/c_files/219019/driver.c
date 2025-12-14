#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)141;
unsigned int var_7 = 883364497U;
long long int var_8 = 7397337731797600093LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)124;
unsigned long long int var_12 = 6240619713643920264ULL;
unsigned int var_13 = 4267360628U;
unsigned short var_14 = (unsigned short)34286;
int zero = 0;
int var_15 = 1367034173;
int var_16 = 176292311;
short var_17 = (short)-545;
short var_18 = (short)27270;
long long int var_19 = 1181138209990262587LL;
unsigned char var_20 = (unsigned char)147;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2226229349U;
unsigned int var_23 = 3035050248U;
_Bool arr_0 [18] [18] ;
signed char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
