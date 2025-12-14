#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1699275270;
short var_3 = (short)-117;
long long int var_4 = -5476733781480138212LL;
long long int var_5 = -6247265911106024971LL;
short var_7 = (short)20061;
signed char var_8 = (signed char)9;
int zero = 0;
int var_10 = -842470257;
unsigned short var_11 = (unsigned short)23432;
int var_12 = -1769300546;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
