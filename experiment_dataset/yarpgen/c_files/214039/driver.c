#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2333918316723505878ULL;
unsigned long long int var_7 = 10059600585612864783ULL;
long long int var_9 = 3750907889079129456LL;
_Bool var_10 = (_Bool)0;
short var_13 = (short)6447;
unsigned short var_14 = (unsigned short)7704;
unsigned char var_15 = (unsigned char)10;
signed char var_16 = (signed char)56;
int zero = 0;
unsigned int var_18 = 3410917196U;
unsigned char var_19 = (unsigned char)176;
short var_20 = (short)15505;
short var_21 = (short)-462;
_Bool var_22 = (_Bool)1;
long long int arr_1 [16] [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5525682931809231838LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
