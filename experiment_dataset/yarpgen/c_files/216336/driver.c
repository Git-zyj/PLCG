#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)46;
unsigned long long int var_3 = 4411105163875876114ULL;
unsigned char var_5 = (unsigned char)28;
unsigned short var_6 = (unsigned short)21017;
unsigned char var_9 = (unsigned char)240;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = -425475929;
int var_17 = -512231138;
unsigned char var_18 = (unsigned char)241;
unsigned short var_19 = (unsigned short)59601;
unsigned char var_20 = (unsigned char)114;
signed char var_21 = (signed char)-39;
long long int arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2792890849037922271LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
