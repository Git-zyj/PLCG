#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21430;
_Bool var_2 = (_Bool)0;
long long int var_3 = 4588722376112321960LL;
unsigned int var_4 = 3624860327U;
unsigned long long int var_5 = 14927390287381059803ULL;
unsigned int var_9 = 2353087330U;
long long int var_10 = -1889732359763644875LL;
short var_11 = (short)-30439;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8774667759735360323LL;
unsigned short var_14 = (unsigned short)37065;
int zero = 0;
signed char var_15 = (signed char)-114;
unsigned char var_16 = (unsigned char)205;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-11342;
signed char var_19 = (signed char)-81;
_Bool var_20 = (_Bool)1;
int var_21 = -14670134;
unsigned int arr_0 [16] ;
unsigned short arr_5 [16] [16] [16] ;
unsigned long long int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1975542037U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)5334;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4671521444383338733ULL : 10958118441265310432ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
