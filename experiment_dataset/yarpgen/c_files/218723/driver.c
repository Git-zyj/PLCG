#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7427848201593332617LL;
short var_6 = (short)9454;
unsigned int var_7 = 2031587004U;
unsigned long long int var_8 = 5006275367275653696ULL;
unsigned int var_9 = 242973030U;
unsigned int var_11 = 740119363U;
int zero = 0;
unsigned char var_20 = (unsigned char)213;
unsigned short var_21 = (unsigned short)37199;
unsigned int var_22 = 1426546836U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)4;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 8178765849288319224ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10273522777143879317ULL : 17517487610351425679ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 909179875U : 2677054915U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
