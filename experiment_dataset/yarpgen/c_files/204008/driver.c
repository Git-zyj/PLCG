#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1706824954;
unsigned int var_4 = 3563043210U;
short var_5 = (short)9287;
unsigned long long int var_6 = 17878929024133737176ULL;
unsigned short var_8 = (unsigned short)49457;
long long int var_12 = 3555320959046593618LL;
unsigned short var_14 = (unsigned short)22114;
unsigned short var_16 = (unsigned short)20351;
int zero = 0;
unsigned short var_17 = (unsigned short)30881;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-14215;
unsigned short var_20 = (unsigned short)61270;
short var_21 = (short)-6977;
int var_22 = -1382982607;
short arr_0 [18] [18] ;
unsigned int arr_2 [18] ;
long long int arr_4 [18] [18] [18] ;
unsigned short arr_9 [18] ;
unsigned int arr_10 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)902;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3639840551U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -6431311392925967278LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26270 : (unsigned short)21071;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2865556250U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
