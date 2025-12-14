#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2471217052U;
unsigned char var_7 = (unsigned char)181;
short var_13 = (short)10537;
long long int var_14 = -1435311152107111023LL;
unsigned char var_15 = (unsigned char)212;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-77;
unsigned int var_22 = 2853800192U;
unsigned int var_23 = 4081702291U;
unsigned long long int arr_1 [19] [19] ;
unsigned short arr_3 [19] [19] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4765521438269414307ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29598 : (unsigned short)58411;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)31690;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
