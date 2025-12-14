#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)4633;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 13271510533082683960ULL;
long long int var_21 = -1142795953375220122LL;
short var_22 = (short)-16196;
unsigned int var_23 = 779131227U;
short var_24 = (short)21718;
short var_25 = (short)25655;
unsigned long long int var_26 = 17137490312106072414ULL;
unsigned short var_27 = (unsigned short)46502;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 7357953466030797525ULL;
_Bool var_30 = (_Bool)1;
long long int var_31 = -9054879463369327479LL;
unsigned char arr_17 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)104 : (unsigned char)23;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
