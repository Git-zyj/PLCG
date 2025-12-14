#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_4 = -834725395;
unsigned char var_6 = (unsigned char)159;
signed char var_8 = (signed char)-111;
unsigned long long int var_9 = 3343607415254880539ULL;
unsigned long long int var_10 = 15305739857321713543ULL;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4463906393458696738ULL;
int var_16 = -143687710;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5341054487217600898LL;
signed char var_19 = (signed char)5;
short var_20 = (short)1790;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned short arr_0 [17] [17] ;
_Bool arr_1 [17] ;
unsigned long long int arr_3 [17] ;
unsigned char arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18753;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 8074114016365696371ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)242;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
