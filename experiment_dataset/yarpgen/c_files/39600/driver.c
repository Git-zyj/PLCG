#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -797969411638512188LL;
long long int var_2 = -3881768830478169381LL;
unsigned short var_3 = (unsigned short)65015;
unsigned short var_4 = (unsigned short)17659;
unsigned int var_7 = 2028500692U;
unsigned int var_8 = 2036276186U;
signed char var_9 = (signed char)99;
unsigned short var_10 = (unsigned short)47218;
int var_11 = -1829777106;
unsigned char var_12 = (unsigned char)213;
unsigned int var_13 = 4083613521U;
unsigned int var_15 = 3772047758U;
int zero = 0;
unsigned short var_16 = (unsigned short)8652;
short var_17 = (short)25960;
int var_18 = 1917389001;
unsigned int var_19 = 3029325629U;
unsigned int var_20 = 1233270928U;
long long int var_21 = 4348228796402882499LL;
unsigned char var_22 = (unsigned char)61;
unsigned long long int var_23 = 13800970854286829325ULL;
unsigned long long int var_24 = 444829006526457361ULL;
unsigned char var_25 = (unsigned char)152;
int arr_9 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2093005561 : -1662114942;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
