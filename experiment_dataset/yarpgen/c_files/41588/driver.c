#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3919186018U;
signed char var_1 = (signed char)76;
int var_2 = 1127511174;
int var_3 = -1512529108;
long long int var_4 = 2389061450602325723LL;
long long int var_5 = -7797785295308436754LL;
long long int var_6 = 1748137259820024927LL;
long long int var_7 = -1174064178619775915LL;
unsigned long long int var_8 = 7680768220634245037ULL;
unsigned char var_9 = (unsigned char)228;
long long int var_10 = 6620226067498233200LL;
int zero = 0;
signed char var_11 = (signed char)105;
long long int var_12 = 6537989915351633771LL;
unsigned int var_13 = 2623424006U;
long long int var_14 = -3420980057567644347LL;
int var_15 = 2104452555;
unsigned int var_16 = 96012541U;
int var_17 = -1081927884;
long long int var_18 = 9063555608743105799LL;
int var_19 = 1302732955;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9971188446200558827ULL;
short arr_12 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-13192 : (short)-15411;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
