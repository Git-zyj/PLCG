#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1512496517U;
long long int var_1 = 9012414799275284263LL;
unsigned char var_3 = (unsigned char)64;
unsigned char var_5 = (unsigned char)68;
signed char var_6 = (signed char)-114;
long long int var_7 = 6485446458089682705LL;
signed char var_8 = (signed char)117;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 6462336665716769469ULL;
unsigned char var_13 = (unsigned char)142;
unsigned int var_14 = 2738887534U;
unsigned short var_15 = (unsigned short)53705;
signed char var_16 = (signed char)77;
int zero = 0;
unsigned short var_17 = (unsigned short)1693;
unsigned int var_18 = 3855910696U;
_Bool var_19 = (_Bool)0;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
