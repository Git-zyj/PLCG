#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 821958133679671124ULL;
long long int var_5 = 4107596804692095844LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)174;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)14440;
unsigned int var_13 = 302946847U;
short var_14 = (short)7705;
unsigned short var_15 = (unsigned short)24917;
unsigned short var_16 = (unsigned short)27655;
int zero = 0;
int var_18 = 1143924879;
signed char var_19 = (signed char)-52;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)228;
int var_22 = -587174040;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)75;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-13660;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
