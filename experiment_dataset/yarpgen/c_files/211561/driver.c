#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21803;
long long int var_5 = -7407678125780618978LL;
long long int var_8 = -1100344302461739190LL;
long long int var_10 = 2571782049177290493LL;
unsigned short var_11 = (unsigned short)36616;
_Bool var_13 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-97;
int var_21 = 2117300832;
signed char var_22 = (signed char)83;
_Bool var_23 = (_Bool)0;
long long int arr_4 [18] [18] ;
long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 9058794026002322546LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -7732453796753866016LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
