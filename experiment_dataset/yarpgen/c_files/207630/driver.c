#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48978;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 6572005422637908402ULL;
unsigned short var_6 = (unsigned short)46165;
signed char var_10 = (signed char)108;
signed char var_11 = (signed char)24;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = -1873580702058307449LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1494690620U;
long long int var_18 = 4385460663365323539LL;
signed char var_19 = (signed char)-20;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2049758843 : 445717419;
}

void checksum() {
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
