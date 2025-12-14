#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8563131517520479452LL;
unsigned char var_2 = (unsigned char)190;
unsigned short var_3 = (unsigned short)51564;
unsigned long long int var_5 = 2871360063352934454ULL;
unsigned int var_6 = 2466287033U;
int var_10 = 1975828134;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)43;
unsigned char var_13 = (unsigned char)62;
short var_14 = (short)-15869;
int zero = 0;
unsigned char var_20 = (unsigned char)82;
signed char var_21 = (signed char)19;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-53;
unsigned char var_24 = (unsigned char)184;
unsigned char var_25 = (unsigned char)7;
signed char var_26 = (signed char)-2;
short arr_2 [17] [17] ;
signed char arr_6 [17] [17] ;
short arr_7 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-20201;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-11447;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
