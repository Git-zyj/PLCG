#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3454858452U;
unsigned long long int var_3 = 14628529707357862178ULL;
int var_4 = 312319319;
unsigned long long int var_9 = 984110614618881903ULL;
long long int var_10 = -4253356208749963914LL;
short var_11 = (short)18865;
unsigned long long int var_12 = 5805583283079396482ULL;
signed char var_14 = (signed char)-50;
int zero = 0;
unsigned short var_18 = (unsigned short)3447;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17115004528474594597ULL;
signed char var_21 = (signed char)58;
long long int var_22 = -3439613955738865615LL;
long long int var_23 = -7224025354871819414LL;
int var_24 = 1841348441;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-10178;
short arr_16 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)1503;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
