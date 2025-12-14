#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8936373096591045932LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)14779;
int var_6 = -446209200;
unsigned short var_10 = (unsigned short)5181;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-30;
unsigned int var_20 = 3834127386U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 683506273U;
unsigned int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2581080095U : 2585249986U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
