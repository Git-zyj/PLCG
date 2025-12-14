#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16306;
unsigned long long int var_2 = 10861034766963713971ULL;
long long int var_3 = -210956294732181952LL;
unsigned long long int var_4 = 15621876904061740253ULL;
long long int var_8 = 349925349748252155LL;
unsigned char var_9 = (unsigned char)152;
long long int var_10 = -3534115524834140614LL;
unsigned long long int var_12 = 7561206936840386034ULL;
unsigned char var_14 = (unsigned char)203;
int zero = 0;
signed char var_15 = (signed char)-112;
int var_16 = -145177833;
unsigned short var_17 = (unsigned short)33432;
unsigned char var_18 = (unsigned char)205;
unsigned char var_19 = (unsigned char)23;
unsigned long long int var_20 = 5572673630884452876ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
long long int arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
unsigned char arr_2 [17] [17] ;
unsigned long long int arr_3 [17] ;
unsigned char arr_5 [17] ;
unsigned char arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 2200280154129830240LL : -1996451340012899170LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)162 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 6100684657174719976ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (unsigned char)180;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
