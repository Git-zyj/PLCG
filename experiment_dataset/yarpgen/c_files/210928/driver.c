#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)230;
unsigned long long int var_4 = 15515921900304605968ULL;
int var_6 = 1128223618;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)62;
unsigned short var_12 = (unsigned short)9568;
long long int var_14 = -462628187683161500LL;
unsigned long long int var_15 = 16540404538822801294ULL;
long long int var_16 = 5550114173692548138LL;
int zero = 0;
int var_17 = -350142914;
int var_18 = 604197733;
signed char var_19 = (signed char)-13;
int var_20 = 1006503940;
unsigned char var_21 = (unsigned char)197;
signed char var_22 = (signed char)-95;
int var_23 = 1636667856;
unsigned long long int arr_0 [17] ;
short arr_3 [13] ;
int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 12007450607451296821ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)9068;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 413243733 : 1997126240;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
