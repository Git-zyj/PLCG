#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46101;
signed char var_1 = (signed char)94;
signed char var_2 = (signed char)30;
unsigned char var_3 = (unsigned char)11;
int var_5 = -105485670;
unsigned int var_6 = 3758118665U;
signed char var_7 = (signed char)35;
unsigned short var_8 = (unsigned short)43945;
unsigned long long int var_9 = 1940400461244940870ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)247;
signed char var_12 = (signed char)59;
unsigned short var_13 = (unsigned short)28594;
unsigned char var_14 = (unsigned char)155;
unsigned long long int var_15 = 11419779303161915649ULL;
int var_16 = 1938247179;
unsigned char var_17 = (unsigned char)42;
int var_18 = -1036958885;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2065990814U;
long long int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 219967413902682032LL : -4492028726118385840LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
