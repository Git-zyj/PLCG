#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
short var_2 = (short)16283;
unsigned long long int var_3 = 6097463711007530058ULL;
long long int var_4 = 3749391988323975802LL;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_15 = 1249189779;
int zero = 0;
unsigned long long int var_18 = 13549470417552999713ULL;
short var_19 = (short)-30835;
unsigned short var_20 = (unsigned short)51812;
unsigned long long int var_21 = 8983695861156231031ULL;
long long int var_22 = -411162015711509605LL;
_Bool var_23 = (_Bool)0;
signed char arr_1 [11] ;
signed char arr_2 [11] [11] ;
signed char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)127 : (signed char)15;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
