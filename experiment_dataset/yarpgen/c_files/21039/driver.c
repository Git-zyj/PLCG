#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11702316799892736580ULL;
short var_5 = (short)-6350;
short var_8 = (short)1330;
_Bool var_10 = (_Bool)1;
int var_14 = -900047706;
short var_15 = (short)23062;
_Bool var_16 = (_Bool)0;
short var_18 = (short)19344;
int zero = 0;
short var_20 = (short)4939;
short var_21 = (short)8741;
unsigned long long int var_22 = 910340309580333155ULL;
short var_23 = (short)-20178;
short var_24 = (short)-19439;
short var_25 = (short)-10536;
short var_26 = (short)-29073;
short var_27 = (short)-989;
_Bool var_28 = (_Bool)0;
long long int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
_Bool arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 6335151943241094540LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 269206779702011016ULL : 10067003643939353432ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
