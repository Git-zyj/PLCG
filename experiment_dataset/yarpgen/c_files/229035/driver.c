#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
int var_2 = -278629422;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)117;
int var_8 = -1976817531;
long long int var_10 = 1187603658978861149LL;
int zero = 0;
signed char var_11 = (signed char)8;
long long int var_12 = -8399081754198358953LL;
unsigned char var_13 = (unsigned char)244;
unsigned char var_14 = (unsigned char)107;
signed char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)52;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
