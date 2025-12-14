#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1404377755;
short var_2 = (short)28117;
long long int var_4 = -5944862292815876738LL;
signed char var_5 = (signed char)34;
unsigned char var_6 = (unsigned char)219;
int var_7 = -1066102799;
_Bool var_8 = (_Bool)0;
int var_10 = 125773151;
int zero = 0;
unsigned long long int var_11 = 551742457653983636ULL;
long long int var_12 = 8730029369053346966LL;
unsigned short arr_4 [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)13377;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1847494390;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
