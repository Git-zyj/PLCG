#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3157577332U;
unsigned long long int var_2 = 15108612332054602165ULL;
signed char var_3 = (signed char)30;
_Bool var_5 = (_Bool)1;
int var_6 = -452658433;
unsigned long long int var_8 = 13954137577413797541ULL;
int var_9 = -1002571496;
int var_13 = 797682827;
_Bool var_14 = (_Bool)1;
unsigned short var_17 = (unsigned short)48026;
int zero = 0;
unsigned int var_19 = 786215646U;
short var_20 = (short)18593;
unsigned short var_21 = (unsigned short)59891;
unsigned long long int var_22 = 10267264527181714912ULL;
short var_23 = (short)-29756;
unsigned short var_24 = (unsigned short)31740;
_Bool arr_1 [14] [14] ;
long long int arr_2 [14] ;
unsigned char arr_8 [14] [14] ;
short arr_9 [14] ;
unsigned char arr_12 [14] [14] [14] [14] ;
unsigned short arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7600693307674937681LL : -525686245581432433LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)105 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)-11256;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9111 : (unsigned short)50749;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
