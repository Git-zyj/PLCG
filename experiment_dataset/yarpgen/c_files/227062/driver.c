#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
signed char var_2 = (signed char)-54;
unsigned int var_3 = 1706452434U;
unsigned short var_4 = (unsigned short)2693;
signed char var_8 = (signed char)119;
signed char var_9 = (signed char)-18;
unsigned int var_10 = 105862202U;
signed char var_11 = (signed char)-44;
unsigned int var_14 = 2953388793U;
unsigned short var_15 = (unsigned short)54871;
unsigned long long int var_16 = 3891811843010248507ULL;
int var_17 = -145603534;
int zero = 0;
unsigned int var_19 = 209450460U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = 1820010028098623523LL;
unsigned int var_23 = 2724376721U;
unsigned int arr_0 [11] ;
signed char arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3898357163U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-107;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
