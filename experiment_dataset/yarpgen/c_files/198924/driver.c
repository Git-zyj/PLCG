#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4494997472515378688LL;
long long int var_2 = 1220545256635001450LL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1697597917U;
short var_6 = (short)-19879;
long long int var_7 = 5369919010598380344LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)127;
signed char var_11 = (signed char)-116;
short var_12 = (short)24132;
unsigned char var_13 = (unsigned char)93;
unsigned short var_14 = (unsigned short)1367;
int zero = 0;
long long int var_15 = -2456107717601444451LL;
short var_16 = (short)-4521;
signed char var_17 = (signed char)104;
signed char var_18 = (signed char)58;
short var_19 = (short)2740;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)162;
signed char arr_0 [17] ;
unsigned char arr_2 [17] ;
signed char arr_3 [17] ;
short arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4095;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
