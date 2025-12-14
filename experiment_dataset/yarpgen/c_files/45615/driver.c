#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -771145162;
signed char var_1 = (signed char)61;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)63418;
unsigned short var_5 = (unsigned short)44745;
long long int var_6 = 796356915508839637LL;
unsigned short var_7 = (unsigned short)45742;
signed char var_8 = (signed char)-72;
signed char var_9 = (signed char)-29;
unsigned int var_10 = 1276197748U;
int var_11 = 1906826681;
unsigned short var_12 = (unsigned short)34396;
unsigned char var_13 = (unsigned char)15;
long long int var_14 = 6876085901782120544LL;
_Bool var_15 = (_Bool)1;
int var_16 = -1224788646;
int zero = 0;
unsigned char var_17 = (unsigned char)218;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-16026;
short var_20 = (short)-16671;
unsigned short var_21 = (unsigned short)57154;
unsigned short var_22 = (unsigned short)38975;
unsigned short arr_5 [25] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12659 : (unsigned short)63663;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1664818969 : -138575122;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
