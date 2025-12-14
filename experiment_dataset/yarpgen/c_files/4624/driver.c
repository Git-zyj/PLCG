#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2399800383859981277LL;
int var_1 = 1324424584;
unsigned long long int var_2 = 4190882486414659548ULL;
int var_3 = 362347290;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6524059619890463961ULL;
signed char var_6 = (signed char)107;
short var_7 = (short)-31866;
long long int var_8 = -6238226584128296614LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -771988121343325993LL;
unsigned short var_11 = (unsigned short)52413;
long long int var_12 = -3777763208188403673LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 14049451249627716577ULL;
unsigned short var_15 = (unsigned short)42548;
unsigned long long int var_16 = 15033003336798636357ULL;
short var_17 = (short)-22145;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12237480925664171514ULL : 14742362740348783337ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
