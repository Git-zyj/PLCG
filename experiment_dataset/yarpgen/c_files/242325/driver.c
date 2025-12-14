#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7738373306449811015ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 1379223714;
unsigned long long int var_7 = 9398785217903778085ULL;
short var_8 = (short)-14785;
unsigned short var_10 = (unsigned short)46904;
unsigned short var_11 = (unsigned short)12114;
signed char var_15 = (signed char)12;
int var_16 = -1363328860;
int zero = 0;
unsigned short var_17 = (unsigned short)60800;
unsigned long long int var_18 = 15601025512640752223ULL;
int var_19 = -972238233;
unsigned short var_20 = (unsigned short)4764;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
