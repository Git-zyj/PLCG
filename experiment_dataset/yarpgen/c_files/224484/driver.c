#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1610249543U;
unsigned long long int var_1 = 13855135316577526715ULL;
unsigned char var_2 = (unsigned char)82;
unsigned int var_3 = 2309743841U;
unsigned short var_5 = (unsigned short)43740;
signed char var_6 = (signed char)127;
unsigned long long int var_8 = 11992311018827494ULL;
signed char var_10 = (signed char)-26;
short var_11 = (short)-28596;
signed char var_12 = (signed char)-107;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)1595;
long long int var_15 = -8420015135390560285LL;
long long int var_16 = 3484294830575801541LL;
long long int var_17 = 2923697755992319058LL;
long long int var_18 = 2475556188894283330LL;
long long int var_19 = -4763080660882654238LL;
unsigned long long int var_20 = 10021328627073153523ULL;
unsigned int arr_0 [19] ;
short arr_1 [19] ;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3360384090U : 3773188925U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)5503 : (short)-31755;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4203397839U : 2447442313U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
