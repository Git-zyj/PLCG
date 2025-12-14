#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3417190149U;
unsigned char var_1 = (unsigned char)155;
int var_2 = 2143309950;
long long int var_3 = -7415138140906362054LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)19348;
unsigned long long int var_9 = 4184978118704344165ULL;
unsigned short var_10 = (unsigned short)21097;
short var_11 = (short)14926;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)6355;
unsigned int var_15 = 3571920156U;
signed char var_16 = (signed char)-79;
long long int var_17 = 2392089029490163208LL;
int arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1844151159;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)148;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
