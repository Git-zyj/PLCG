#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1129511964U;
short var_4 = (short)-12317;
unsigned short var_6 = (unsigned short)10785;
unsigned int var_8 = 839524975U;
unsigned int var_9 = 4151386274U;
unsigned char var_10 = (unsigned char)38;
long long int var_11 = 1533518329620674399LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1905980328;
unsigned int var_14 = 3779751301U;
short var_15 = (short)4563;
int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 891035439;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
