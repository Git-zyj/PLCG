#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4339181398941451628ULL;
short var_5 = (short)32602;
signed char var_6 = (signed char)-21;
long long int var_8 = 3253714793912654818LL;
int var_9 = 1789754202;
short var_15 = (short)-30181;
int var_16 = -739924565;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)251;
_Bool var_22 = (_Bool)0;
int var_23 = 34118223;
int var_24 = 1133613879;
int var_25 = 1415118854;
unsigned short var_26 = (unsigned short)11236;
int var_27 = -181210431;
_Bool var_28 = (_Bool)1;
short arr_2 [13] ;
short arr_3 [13] ;
unsigned short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)16216;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-14590 : (short)-18241;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29018 : (unsigned short)34235;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
