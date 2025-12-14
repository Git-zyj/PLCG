#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned short var_2 = (unsigned short)17524;
long long int var_4 = 184274075458116761LL;
unsigned int var_5 = 2394774569U;
signed char var_6 = (signed char)115;
int var_8 = -2053281627;
unsigned long long int var_9 = 234302205155250341ULL;
signed char var_10 = (signed char)-27;
unsigned int var_11 = 2257372298U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14361009579710568769ULL;
unsigned char var_15 = (unsigned char)26;
signed char var_16 = (signed char)-61;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 883123853U;
unsigned short var_19 = (unsigned short)52121;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)99;
short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-19707 : (short)-1054;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
