#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
unsigned short var_7 = (unsigned short)7266;
unsigned char var_9 = (unsigned char)135;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 2013295218U;
int var_15 = -1584633012;
unsigned char var_17 = (unsigned char)56;
long long int var_18 = -5929651531183600486LL;
int zero = 0;
short var_19 = (short)22106;
long long int var_20 = -1755425275359847617LL;
signed char var_21 = (signed char)24;
short var_22 = (short)-22792;
unsigned int var_23 = 1503144509U;
long long int var_24 = 1465997149469045301LL;
unsigned long long int arr_1 [16] [16] ;
int arr_4 [16] ;
signed char arr_9 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 4771915185808381714ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1253671488;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)89;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
