#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned int var_3 = 1017180288U;
signed char var_5 = (signed char)125;
_Bool var_7 = (_Bool)0;
short var_9 = (short)22059;
unsigned char var_10 = (unsigned char)154;
int zero = 0;
long long int var_12 = 8301673663156864370LL;
signed char var_13 = (signed char)39;
unsigned short var_14 = (unsigned short)5425;
long long int var_15 = -6926453090031482092LL;
unsigned int var_16 = 777914432U;
long long int var_17 = -7925386566566518365LL;
signed char var_18 = (signed char)92;
unsigned char var_19 = (unsigned char)254;
long long int var_20 = -5089106493959883046LL;
unsigned long long int var_21 = 16275528730885150969ULL;
unsigned char var_22 = (unsigned char)144;
long long int var_23 = 2211125763672548151LL;
signed char arr_1 [18] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-82;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
