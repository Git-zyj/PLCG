#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_2 = (signed char)-35;
short var_4 = (short)23838;
unsigned short var_6 = (unsigned short)44830;
short var_8 = (short)20952;
unsigned long long int var_10 = 10785286581072781628ULL;
unsigned int var_11 = 1468491211U;
int zero = 0;
unsigned long long int var_12 = 8865271030934367280ULL;
unsigned long long int var_13 = 18384835763215036465ULL;
long long int var_14 = 1515153584969749459LL;
short var_15 = (short)-2533;
unsigned short var_16 = (unsigned short)18968;
unsigned short var_17 = (unsigned short)33324;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)93;
short arr_1 [19] [19] ;
unsigned short arr_6 [19] [19] [19] ;
_Bool arr_7 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24604;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)566;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
