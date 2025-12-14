#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
signed char var_1 = (signed char)93;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 18062189906302040206ULL;
unsigned char var_4 = (unsigned char)242;
unsigned long long int var_5 = 9614853124368116786ULL;
unsigned long long int var_7 = 8206883063224377592ULL;
signed char var_9 = (signed char)55;
long long int var_11 = 4821678740684584452LL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)3;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)10;
short var_19 = (short)-27035;
signed char var_20 = (signed char)-121;
unsigned char var_21 = (unsigned char)175;
signed char var_22 = (signed char)105;
unsigned char var_23 = (unsigned char)231;
unsigned long long int arr_1 [14] [14] ;
unsigned long long int arr_3 [14] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 10211813677691836630ULL : 9663761182014336782ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 8146233246864820760ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -3698374606210563833LL;
}

void checksum() {
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
