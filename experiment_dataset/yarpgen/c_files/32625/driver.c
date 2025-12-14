#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
signed char var_3 = (signed char)30;
int var_4 = 1274848714;
unsigned long long int var_6 = 16035028464721335978ULL;
unsigned char var_7 = (unsigned char)77;
short var_9 = (short)-10150;
signed char var_10 = (signed char)6;
unsigned short var_11 = (unsigned short)24194;
int var_13 = 1271701517;
int zero = 0;
unsigned char var_14 = (unsigned char)146;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)79;
int var_17 = -566043667;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3499353694U;
int var_20 = -47414438;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)58;
unsigned short var_23 = (unsigned short)39298;
unsigned char var_24 = (unsigned char)136;
short var_25 = (short)3465;
unsigned short arr_2 [14] ;
long long int arr_6 [14] ;
short arr_13 [14] [14] ;
unsigned short arr_17 [14] [14] [14] [14] ;
short arr_21 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)47607;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 5118590927552557684LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-6240 : (short)10626;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)36484 : (unsigned short)54628;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (short)15588;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
