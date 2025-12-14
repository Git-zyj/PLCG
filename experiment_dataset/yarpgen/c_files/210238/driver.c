#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
int var_1 = 597652874;
unsigned short var_3 = (unsigned short)33887;
unsigned long long int var_5 = 829296279422346639ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-32395;
long long int var_9 = -7893429175762595807LL;
unsigned int var_10 = 628531651U;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-114;
int var_15 = -1895206228;
short var_18 = (short)27830;
unsigned int var_19 = 4180789097U;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1659680015;
unsigned char var_22 = (unsigned char)190;
unsigned short var_23 = (unsigned short)10407;
_Bool arr_3 [20] [20] [20] ;
int arr_9 [20] ;
long long int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -203189370 : -1292655389;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -4869994826357386679LL : -1903599954837406986LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
