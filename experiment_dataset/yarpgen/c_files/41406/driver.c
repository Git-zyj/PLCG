#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)46;
unsigned int var_4 = 3203892449U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)42796;
unsigned char var_11 = (unsigned char)22;
unsigned int var_12 = 3120270234U;
short var_15 = (short)18768;
int zero = 0;
signed char var_16 = (signed char)-35;
_Bool var_17 = (_Bool)0;
int var_18 = -600925090;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5416864381987485045ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)59;
unsigned int var_23 = 4275170989U;
short var_24 = (short)32325;
int arr_1 [22] ;
unsigned short arr_2 [24] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1659573475;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)49980;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-23288 : (short)-1066;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
