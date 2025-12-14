#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 196757844U;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)43062;
int var_4 = -2050508068;
unsigned short var_9 = (unsigned short)31273;
long long int var_11 = 5740321804549855520LL;
long long int var_12 = -8990168166392479331LL;
long long int var_13 = -1428626885047585163LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-14018;
long long int var_17 = 6345714790255945210LL;
signed char var_18 = (signed char)-105;
long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -7817316774947292644LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
