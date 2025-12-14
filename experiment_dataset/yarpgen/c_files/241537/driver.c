#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -4533137199402129335LL;
unsigned short var_7 = (unsigned short)61108;
short var_8 = (short)6772;
unsigned short var_11 = (unsigned short)21032;
signed char var_13 = (signed char)85;
long long int var_14 = -5203345239825605800LL;
long long int var_18 = 8772944747727726060LL;
int zero = 0;
short var_19 = (short)-29433;
short var_20 = (short)-30473;
long long int var_21 = 1798049565129087591LL;
short var_22 = (short)10184;
unsigned short var_23 = (unsigned short)44205;
short var_24 = (short)-7602;
signed char var_25 = (signed char)-90;
long long int var_26 = 3831734865565555925LL;
short arr_0 [15] [15] ;
_Bool arr_1 [15] ;
long long int arr_2 [15] [15] [15] ;
short arr_3 [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-23093;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4398954404117096826LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-25738;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)32843;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
