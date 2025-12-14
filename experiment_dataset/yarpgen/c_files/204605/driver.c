#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21159;
long long int var_2 = 8348664715678449191LL;
unsigned short var_3 = (unsigned short)5064;
unsigned long long int var_4 = 15074819905301089603ULL;
unsigned long long int var_5 = 12538998563986016892ULL;
long long int var_6 = -5860666365041016426LL;
unsigned int var_7 = 3408361836U;
unsigned char var_8 = (unsigned char)113;
short var_9 = (short)289;
unsigned long long int var_10 = 6565938551419271841ULL;
long long int var_11 = 1079535511107947712LL;
unsigned char var_12 = (unsigned char)47;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
unsigned short var_14 = (unsigned short)5879;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 214380043U;
signed char var_18 = (signed char)114;
signed char var_19 = (signed char)-58;
int var_20 = 76332341;
short var_21 = (short)-22794;
unsigned long long int var_22 = 5542693820417973405ULL;
signed char arr_2 [25] ;
unsigned int arr_5 [25] ;
int arr_6 [25] ;
unsigned short arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1161231697U : 4098859504U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2022204501 : 307895357;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48499 : (unsigned short)18812;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
