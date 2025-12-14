#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4563;
unsigned short var_8 = (unsigned short)59972;
long long int var_9 = 1452196797427987188LL;
long long int var_12 = 1491996358433143438LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 1455602837;
long long int var_18 = 755993129131064049LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4341640640921934807ULL;
unsigned long long int var_21 = 10854584856879702598ULL;
unsigned short arr_4 [21] [21] ;
unsigned short arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56011 : (unsigned short)12790;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)52674 : (unsigned short)32684;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
