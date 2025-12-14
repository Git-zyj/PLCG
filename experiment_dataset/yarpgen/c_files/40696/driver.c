#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned char var_1 = (unsigned char)118;
signed char var_2 = (signed char)19;
long long int var_3 = -8187258280063195293LL;
unsigned long long int var_4 = 11264365924317795757ULL;
short var_5 = (short)-13195;
signed char var_6 = (signed char)-54;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 13194038259788336040ULL;
unsigned short var_10 = (unsigned short)7914;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)61810;
unsigned long long int var_13 = 4942152981265917546ULL;
int var_14 = 1098138105;
unsigned short var_15 = (unsigned short)46483;
unsigned long long int arr_1 [19] ;
_Bool arr_2 [19] ;
short arr_3 [19] ;
unsigned char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 17080294216077280530ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)18922;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)111;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
