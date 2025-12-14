#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15697705325254674011ULL;
long long int var_6 = -4845333161231647486LL;
short var_8 = (short)26086;
int var_9 = 1407512936;
unsigned short var_12 = (unsigned short)4472;
int zero = 0;
short var_14 = (short)-28248;
short var_15 = (short)22553;
_Bool var_16 = (_Bool)0;
int var_17 = 1536257216;
short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)28652;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
