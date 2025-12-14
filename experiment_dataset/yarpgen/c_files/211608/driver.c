#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1592718534;
unsigned long long int var_2 = 1639698411946580654ULL;
short var_3 = (short)7122;
int var_7 = 2100357768;
int var_9 = 1714945073;
long long int var_12 = -4244107290979595509LL;
int zero = 0;
unsigned char var_16 = (unsigned char)121;
signed char var_17 = (signed char)-83;
unsigned int var_18 = 3922123307U;
unsigned short arr_1 [18] ;
unsigned int arr_3 [18] ;
unsigned short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)36101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3741123429U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)50672;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
