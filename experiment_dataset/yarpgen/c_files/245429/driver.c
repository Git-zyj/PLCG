#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7729057500396412337LL;
signed char var_4 = (signed char)50;
int var_8 = 1039279466;
int zero = 0;
long long int var_19 = 4146950289549676315LL;
unsigned long long int var_20 = 9943955955796876084ULL;
int var_21 = 380329032;
signed char var_22 = (signed char)91;
int var_23 = -428216115;
signed char var_24 = (signed char)99;
long long int var_25 = 2281046434546243877LL;
short var_26 = (short)39;
long long int var_27 = 315611222891581548LL;
int var_28 = 1220026267;
unsigned long long int arr_0 [21] [21] ;
unsigned short arr_2 [21] ;
short arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 10621949492553992400ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)42967;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (short)1680;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
