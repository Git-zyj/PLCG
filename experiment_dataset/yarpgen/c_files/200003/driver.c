#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1952;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 130605673U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5515975589084542605LL;
short var_13 = (short)1317;
signed char var_16 = (signed char)-37;
int zero = 0;
unsigned short var_19 = (unsigned short)45424;
unsigned short var_20 = (unsigned short)50479;
unsigned long long int var_21 = 8991910832939540114ULL;
_Bool var_22 = (_Bool)0;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)47402;
}

void checksum() {
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
