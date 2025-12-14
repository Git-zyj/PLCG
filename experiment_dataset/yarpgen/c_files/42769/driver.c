#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3918794660224407254LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -4440856493499735894LL;
int var_7 = 1607153845;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 17394137894721444140ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)15319;
int zero = 0;
unsigned int var_13 = 3356926327U;
int var_14 = -1792252888;
unsigned int var_15 = 1882640605U;
unsigned short var_16 = (unsigned short)10085;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)38;
short var_19 = (short)11105;
unsigned short var_20 = (unsigned short)6522;
unsigned char arr_0 [13] ;
_Bool arr_1 [13] ;
signed char arr_3 [13] [13] ;
_Bool arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
