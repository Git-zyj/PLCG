#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_2 = 861654120;
long long int var_3 = -1879241591375128369LL;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)15;
short var_7 = (short)-15290;
short var_8 = (short)18985;
unsigned int var_9 = 814646363U;
int var_10 = -1871468506;
unsigned int var_11 = 3179241301U;
short var_12 = (short)-440;
unsigned char var_13 = (unsigned char)200;
unsigned int var_14 = 3579020297U;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 4728948948430445439LL;
unsigned char var_18 = (unsigned char)20;
int var_19 = 1501741249;
long long int var_20 = 3928265849015371104LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)61856;
_Bool var_23 = (_Bool)1;
short var_24 = (short)21118;
short arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (short)-27762;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
