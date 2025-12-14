#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 394142334;
unsigned char var_1 = (unsigned char)7;
long long int var_2 = -3526355172807121233LL;
unsigned short var_4 = (unsigned short)26463;
signed char var_5 = (signed char)-1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6731331169991255320LL;
unsigned char var_9 = (unsigned char)131;
int zero = 0;
long long int var_13 = 463854645964931664LL;
unsigned short var_14 = (unsigned short)37969;
short var_15 = (short)15022;
unsigned char var_16 = (unsigned char)209;
unsigned char var_17 = (unsigned char)84;
long long int var_18 = 5192299130289457858LL;
int var_19 = 1209628192;
unsigned char arr_2 [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-19;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
