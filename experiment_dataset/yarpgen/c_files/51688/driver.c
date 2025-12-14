#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)26779;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)42874;
unsigned char var_8 = (unsigned char)140;
int var_9 = 646015329;
unsigned long long int var_10 = 16070551199094007136ULL;
int zero = 0;
unsigned long long int var_11 = 6113787501597785743ULL;
signed char var_12 = (signed char)115;
signed char var_13 = (signed char)(-127 - 1);
short var_14 = (short)31446;
unsigned char var_15 = (unsigned char)46;
_Bool arr_0 [25] ;
unsigned short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)53303;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
