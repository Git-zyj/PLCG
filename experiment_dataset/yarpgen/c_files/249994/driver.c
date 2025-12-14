#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 520092958;
short var_3 = (short)-9832;
unsigned int var_5 = 3813324350U;
signed char var_7 = (signed char)51;
unsigned short var_8 = (unsigned short)35064;
long long int var_9 = 2803332411807117350LL;
_Bool var_10 = (_Bool)0;
signed char var_14 = (signed char)54;
short var_16 = (short)28148;
long long int var_17 = 4978379971197468674LL;
unsigned char var_18 = (unsigned char)138;
int zero = 0;
unsigned int var_19 = 2885361964U;
unsigned short var_20 = (unsigned short)28314;
short var_21 = (short)-5317;
unsigned short var_22 = (unsigned short)1762;
unsigned char var_23 = (unsigned char)115;
_Bool var_24 = (_Bool)0;
int var_25 = 789489363;
int arr_0 [10] ;
int arr_1 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1251853484 : -632642551;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 636679379;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-25747;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
