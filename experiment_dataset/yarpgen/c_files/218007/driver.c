#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1622310647476505773LL;
short var_6 = (short)24280;
unsigned char var_7 = (unsigned char)62;
int var_8 = 518590008;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -31762551;
long long int var_18 = -3337575771624170959LL;
long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7157818239283360522LL : 6184798618630655295LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
