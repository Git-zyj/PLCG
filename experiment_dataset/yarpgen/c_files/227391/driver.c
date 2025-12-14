#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4106;
long long int var_1 = -2903065081028656457LL;
unsigned short var_2 = (unsigned short)20494;
short var_3 = (short)-26715;
unsigned long long int var_4 = 13133301556300260705ULL;
unsigned long long int var_5 = 3393457471125202025ULL;
short var_6 = (short)17259;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)116;
int zero = 0;
signed char var_10 = (signed char)65;
unsigned long long int var_11 = 10841294725829086197ULL;
unsigned int var_12 = 3645524000U;
short var_13 = (short)12923;
short var_14 = (short)-32341;
long long int var_15 = 5634983398480820312LL;
unsigned long long int arr_0 [17] ;
_Bool arr_2 [17] ;
_Bool arr_3 [17] ;
signed char arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 9193090532675711723ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)76;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
