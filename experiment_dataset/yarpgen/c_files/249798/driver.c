#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16256605723182289103ULL;
unsigned char var_1 = (unsigned char)55;
int var_3 = -1644405105;
short var_4 = (short)1338;
signed char var_5 = (signed char)33;
unsigned long long int var_6 = 10023530267045957499ULL;
long long int var_8 = -9019457417348648397LL;
unsigned char var_9 = (unsigned char)111;
unsigned long long int var_11 = 7549856684817648595ULL;
unsigned int var_12 = 1421962821U;
signed char var_13 = (signed char)-92;
signed char var_14 = (signed char)115;
unsigned int var_15 = 3805594834U;
_Bool var_16 = (_Bool)1;
int var_18 = -1616843650;
unsigned long long int var_19 = 13303741631495797726ULL;
int zero = 0;
signed char var_20 = (signed char)-118;
int var_21 = 1174998870;
long long int var_22 = -4301823174119303353LL;
unsigned int var_23 = 3367029908U;
long long int var_24 = 248348972643068604LL;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-13298;
signed char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)89;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
