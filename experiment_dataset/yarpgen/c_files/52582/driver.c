#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2082498336519171689LL;
unsigned char var_1 = (unsigned char)18;
int var_7 = -354799748;
int zero = 0;
signed char var_11 = (signed char)-44;
unsigned long long int var_12 = 15869636688242397010ULL;
unsigned long long int var_13 = 5071044005461481987ULL;
long long int var_14 = -3970921686571026998LL;
short var_15 = (short)9169;
unsigned char var_16 = (unsigned char)73;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)45959;
signed char var_19 = (signed char)82;
unsigned int var_20 = 654018527U;
_Bool arr_5 [17] ;
unsigned short arr_6 [17] ;
short arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)23335;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)29640;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
