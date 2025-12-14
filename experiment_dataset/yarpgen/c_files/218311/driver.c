#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2890226097U;
long long int var_2 = 4882758369916320656LL;
short var_3 = (short)16087;
signed char var_6 = (signed char)-56;
unsigned int var_7 = 3704642609U;
int var_9 = 1739800712;
_Bool var_12 = (_Bool)0;
int var_13 = 824566359;
int var_14 = -646392063;
short var_17 = (short)-28281;
int zero = 0;
unsigned long long int var_18 = 12603226485880756057ULL;
int var_19 = -1114736929;
unsigned long long int var_20 = 15148555069377004207ULL;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3823 : (unsigned short)47834;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
