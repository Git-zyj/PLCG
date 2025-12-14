#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14345374210509865406ULL;
int var_1 = -1305984316;
long long int var_2 = 2964674196094445671LL;
long long int var_3 = 6181233452924628434LL;
long long int var_5 = -2999679887750598578LL;
unsigned int var_6 = 3286537686U;
unsigned long long int var_7 = 10925909991545135166ULL;
unsigned long long int var_9 = 4073522320282741932ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-30750;
unsigned long long int var_12 = 13491573806208544145ULL;
int var_13 = 213288686;
int zero = 0;
unsigned long long int var_14 = 9951358719495389568ULL;
unsigned long long int var_15 = 398134337212508120ULL;
int var_16 = 1956267621;
int var_17 = -191582409;
signed char var_18 = (signed char)37;
unsigned int var_19 = 1321786658U;
unsigned short var_20 = (unsigned short)31511;
long long int var_21 = -5600732225028645937LL;
int var_22 = 1194502006;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2378768522U;
unsigned int arr_1 [24] [24] ;
long long int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1319079566U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -3100646282698221635LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3132761121324940854ULL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
