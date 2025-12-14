#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)43640;
unsigned short var_9 = (unsigned short)21855;
long long int var_10 = 234693468123654592LL;
int zero = 0;
unsigned char var_12 = (unsigned char)67;
signed char var_13 = (signed char)-14;
unsigned short var_14 = (unsigned short)3121;
short var_15 = (short)-3656;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2410598303643624062LL;
unsigned short var_18 = (unsigned short)32102;
unsigned short arr_0 [17] ;
short arr_2 [17] [17] [17] ;
_Bool arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)37280;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)14102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
