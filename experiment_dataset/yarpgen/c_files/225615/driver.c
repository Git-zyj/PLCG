#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
long long int var_1 = 3666502664364123412LL;
long long int var_2 = -1254900954258293612LL;
signed char var_3 = (signed char)104;
signed char var_4 = (signed char)-111;
short var_5 = (short)-5563;
int var_6 = -2000853326;
unsigned char var_8 = (unsigned char)56;
unsigned long long int var_9 = 10304442751734256229ULL;
unsigned int var_10 = 2225702138U;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
unsigned char var_12 = (unsigned char)38;
unsigned long long int var_13 = 11212396397346180092ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 643334411;
unsigned char var_16 = (unsigned char)217;
unsigned int arr_0 [11] [11] ;
_Bool arr_1 [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2791543240U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)91;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
