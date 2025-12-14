#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 523670492;
long long int var_1 = 1480474889585151042LL;
short var_2 = (short)-26323;
short var_3 = (short)-213;
signed char var_4 = (signed char)-81;
unsigned int var_5 = 682892043U;
unsigned int var_6 = 2579938638U;
long long int var_7 = -8423032468011402489LL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2981538282U;
int var_11 = -1676002936;
int zero = 0;
unsigned int var_12 = 2496379918U;
short var_13 = (short)-4043;
short var_14 = (short)-22521;
long long int var_15 = -3687850330847804633LL;
long long int var_16 = 1491834704827045248LL;
unsigned int var_17 = 2988007732U;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-1457;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
