#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
int var_3 = -1592446832;
unsigned long long int var_4 = 16217101771840242566ULL;
int var_8 = -1917332065;
signed char var_11 = (signed char)85;
unsigned long long int var_12 = 3630646255189326036ULL;
unsigned short var_13 = (unsigned short)3295;
int zero = 0;
signed char var_14 = (signed char)41;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7588136732794351946LL;
short var_17 = (short)29127;
int var_18 = 371849519;
long long int var_19 = -8930421055652572968LL;
short arr_0 [14] [14] ;
int arr_2 [14] ;
unsigned int arr_5 [14] [14] ;
long long int arr_6 [14] ;
short arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-12671;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1669452778 : 1486539377;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3726084994U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -4904509556140392050LL : -5285284447774215077LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-25696;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
