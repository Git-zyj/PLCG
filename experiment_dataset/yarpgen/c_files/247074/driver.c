#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
short var_6 = (short)-17870;
short var_7 = (short)21957;
unsigned char var_8 = (unsigned char)126;
int var_9 = -1065832396;
int var_10 = 1476256917;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5484904459906404539LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-61;
_Bool var_15 = (_Bool)1;
unsigned char arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)167;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
