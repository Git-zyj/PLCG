#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2784;
signed char var_2 = (signed char)-46;
unsigned long long int var_3 = 18077843779001683209ULL;
unsigned char var_4 = (unsigned char)143;
unsigned int var_5 = 3432442519U;
int var_9 = -604940352;
signed char var_10 = (signed char)75;
unsigned short var_11 = (unsigned short)32612;
unsigned long long int var_13 = 14338019085467059780ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)178;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)97;
unsigned short var_17 = (unsigned short)47107;
unsigned char var_18 = (unsigned char)223;
signed char var_19 = (signed char)-118;
unsigned int var_20 = 948538338U;
unsigned short var_21 = (unsigned short)52418;
unsigned char var_22 = (unsigned char)104;
long long int var_23 = -7832323487286671991LL;
unsigned char var_24 = (unsigned char)222;
_Bool arr_0 [20] ;
int arr_1 [20] ;
unsigned long long int arr_3 [21] [21] ;
unsigned long long int arr_7 [25] [25] ;
unsigned char arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1163453493;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 7892534113458060901ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 15877528934903802530ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)186;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
