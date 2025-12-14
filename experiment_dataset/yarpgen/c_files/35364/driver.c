#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62023;
unsigned short var_2 = (unsigned short)61650;
signed char var_4 = (signed char)-72;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)23526;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-101;
signed char var_12 = (signed char)79;
long long int var_13 = 1707757013432762561LL;
int zero = 0;
unsigned int var_14 = 459645565U;
short var_15 = (short)12665;
signed char var_16 = (signed char)-44;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
signed char arr_4 [19] ;
short arr_5 [19] ;
unsigned short arr_9 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)10062;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)29025;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)1102 : (short)22635;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15694;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
