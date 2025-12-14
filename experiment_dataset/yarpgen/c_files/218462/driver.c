#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1498329312;
short var_1 = (short)-31326;
int var_4 = 213652710;
unsigned long long int var_5 = 7032485804447558425ULL;
long long int var_6 = 5660070859344841424LL;
unsigned short var_8 = (unsigned short)26265;
unsigned short var_9 = (unsigned short)64130;
int zero = 0;
unsigned long long int var_10 = 3569385127683708498ULL;
_Bool var_11 = (_Bool)0;
int var_12 = 966495376;
int var_13 = 1692960710;
short var_14 = (short)19202;
unsigned short var_15 = (unsigned short)6801;
int var_16 = -685006074;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned short arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 11875028658633819466ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)34240;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
