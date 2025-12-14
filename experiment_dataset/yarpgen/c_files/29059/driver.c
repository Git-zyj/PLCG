#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9082;
short var_6 = (short)-32456;
short var_7 = (short)22030;
long long int var_8 = -1057732693107640881LL;
int zero = 0;
signed char var_13 = (signed char)-91;
short var_14 = (short)15785;
short var_15 = (short)-956;
unsigned long long int var_16 = 6823343323366670580ULL;
unsigned char var_17 = (unsigned char)237;
short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)25798;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
