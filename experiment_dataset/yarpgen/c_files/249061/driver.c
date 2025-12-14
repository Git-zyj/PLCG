#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5547205387868994571LL;
unsigned long long int var_2 = 147343952693807653ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = -8677900879490942878LL;
int var_7 = 1394608579;
unsigned int var_9 = 2332274663U;
long long int var_11 = 8563642069834778309LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-34;
int var_14 = -9079280;
unsigned short var_17 = (unsigned short)62962;
int zero = 0;
unsigned long long int var_19 = 4068568539565961444ULL;
unsigned long long int var_20 = 6659872750984543790ULL;
int var_21 = -1012994931;
long long int var_22 = -5111904557447630815LL;
short var_23 = (short)-5446;
unsigned long long int var_24 = 16799399280069642208ULL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3197712337U;
int var_27 = 1758392569;
unsigned int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 617942606U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 12552603110001733125ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)21400;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
