#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3920807941718383716LL;
unsigned char var_2 = (unsigned char)188;
unsigned int var_3 = 3641342091U;
signed char var_4 = (signed char)-97;
unsigned int var_7 = 2526828435U;
long long int var_8 = 1219763440705796278LL;
short var_9 = (short)-13675;
unsigned char var_12 = (unsigned char)112;
int var_14 = 1130915734;
short var_16 = (short)23256;
int zero = 0;
int var_17 = 423317694;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3709183238085167550LL;
signed char var_20 = (signed char)21;
short var_21 = (short)-6045;
unsigned short arr_5 [19] [19] ;
_Bool arr_3 [17] ;
short arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)62644;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10633;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
