#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 595621377U;
unsigned short var_3 = (unsigned short)28778;
int var_4 = 1569336123;
unsigned char var_6 = (unsigned char)44;
unsigned short var_7 = (unsigned short)27028;
unsigned short var_10 = (unsigned short)29497;
long long int var_11 = -1244974378942721617LL;
unsigned char var_12 = (unsigned char)28;
unsigned long long int var_13 = 4831127258491179031ULL;
int zero = 0;
unsigned long long int var_14 = 17837344120271854718ULL;
unsigned short var_15 = (unsigned short)31428;
signed char var_16 = (signed char)-126;
signed char var_17 = (signed char)42;
unsigned short var_18 = (unsigned short)44841;
unsigned long long int var_19 = 1032211142267714286ULL;
unsigned short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)21119;
}

void checksum() {
    hash(&seed, var_14);
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
