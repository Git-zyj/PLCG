#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1730129289;
int var_3 = -105350081;
short var_5 = (short)-23161;
unsigned short var_12 = (unsigned short)28128;
signed char var_13 = (signed char)89;
int zero = 0;
unsigned char var_15 = (unsigned char)130;
short var_16 = (short)-2138;
long long int var_17 = -7226376810698216384LL;
long long int var_18 = -8089267753196347213LL;
int var_19 = 339885636;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7803737347824802395ULL;
unsigned int var_22 = 3436004577U;
short arr_0 [15] ;
unsigned short arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)15017;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)57079;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
