#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3819646206U;
unsigned long long int var_2 = 4466142829908238672ULL;
unsigned char var_4 = (unsigned char)226;
unsigned char var_7 = (unsigned char)152;
unsigned long long int var_9 = 8947230650541817516ULL;
unsigned long long int var_10 = 11329953218111251343ULL;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 348917180534404563ULL;
unsigned short var_16 = (unsigned short)23585;
unsigned long long int var_17 = 5599091267682686889ULL;
short var_18 = (short)2581;
long long int var_19 = 4224424017288082022LL;
short arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-25479;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
