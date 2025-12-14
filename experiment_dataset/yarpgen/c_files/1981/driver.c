#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7651459050672700445LL;
unsigned long long int var_3 = 10541897979534618218ULL;
unsigned long long int var_4 = 4927666736816611576ULL;
short var_6 = (short)17315;
short var_9 = (short)-23363;
unsigned char var_12 = (unsigned char)155;
short var_13 = (short)18851;
int zero = 0;
signed char var_15 = (signed char)22;
signed char var_16 = (signed char)96;
unsigned int var_17 = 1617339731U;
unsigned short var_18 = (unsigned short)8787;
unsigned short var_19 = (unsigned short)27717;
_Bool arr_2 [14] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16721956982130724400ULL : 991691108918410880ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
