#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3881649959218665305LL;
short var_3 = (short)5571;
unsigned short var_11 = (unsigned short)27191;
int zero = 0;
unsigned long long int var_14 = 7521801841050860412ULL;
unsigned char var_15 = (unsigned char)107;
unsigned short var_16 = (unsigned short)18052;
unsigned char var_17 = (unsigned char)20;
_Bool var_18 = (_Bool)0;
signed char arr_0 [16] [16] ;
signed char arr_4 [16] ;
signed char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)88;
}

void checksum() {
    hash(&seed, var_14);
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
