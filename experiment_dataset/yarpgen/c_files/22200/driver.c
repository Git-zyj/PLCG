#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 226870203;
unsigned int var_2 = 1845963887U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 839392014U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)46;
unsigned short var_10 = (unsigned short)36174;
unsigned long long int var_12 = 5832792715482233107ULL;
int zero = 0;
int var_13 = -235765377;
unsigned char var_14 = (unsigned char)247;
unsigned char var_15 = (unsigned char)17;
int var_16 = -1558998371;
int arr_1 [15] ;
unsigned long long int arr_3 [15] ;
short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 713363344;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8671648992861026223ULL : 112591409937153922ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-10042 : (short)-9000;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
