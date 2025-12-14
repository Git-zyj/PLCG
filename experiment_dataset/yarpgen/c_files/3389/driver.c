#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1834026078907500344LL;
unsigned char var_5 = (unsigned char)128;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-3;
unsigned short var_11 = (unsigned short)37517;
unsigned char var_14 = (unsigned char)235;
unsigned char var_18 = (unsigned char)54;
int zero = 0;
unsigned short var_20 = (unsigned short)56039;
unsigned short var_21 = (unsigned short)19002;
short var_22 = (short)-9188;
unsigned char var_23 = (unsigned char)133;
short var_24 = (short)30728;
_Bool var_25 = (_Bool)1;
int var_26 = 979368122;
long long int var_27 = 1728628639337293279LL;
_Bool arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
