#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3308790718U;
unsigned int var_4 = 2022866084U;
unsigned long long int var_7 = 13444173191306429917ULL;
short var_8 = (short)-21535;
unsigned int var_11 = 3721179593U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1568106137126804034ULL;
unsigned int var_14 = 364171963U;
int var_16 = -37406976;
unsigned long long int var_17 = 13397118847339013087ULL;
int zero = 0;
unsigned int var_18 = 112416239U;
int var_19 = -1512988240;
short var_20 = (short)27169;
int var_21 = -1905166072;
unsigned int var_22 = 1628500678U;
unsigned char var_23 = (unsigned char)189;
unsigned long long int var_24 = 5186511743403666058ULL;
unsigned int var_25 = 875085441U;
int var_26 = -224721261;
int var_27 = 2050576377;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [12] [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 7719797885221251951ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10449050525448628244ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 14464900167726484893ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -199404660;
}

void checksum() {
    hash(&seed, var_18);
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
