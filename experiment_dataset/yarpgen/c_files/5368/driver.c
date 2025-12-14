#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6597507961521264185LL;
unsigned short var_3 = (unsigned short)126;
short var_4 = (short)-23015;
unsigned char var_5 = (unsigned char)82;
long long int var_6 = -9158225671066202530LL;
long long int var_9 = -4006597899343703249LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)9739;
unsigned int var_12 = 1112510584U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)39802;
unsigned char var_16 = (unsigned char)251;
int var_17 = -954215910;
_Bool var_18 = (_Bool)0;
short arr_0 [15] [15] ;
_Bool arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1509;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
