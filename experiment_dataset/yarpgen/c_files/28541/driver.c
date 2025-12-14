#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
short var_2 = (short)2071;
unsigned char var_3 = (unsigned char)39;
signed char var_4 = (signed char)100;
short var_5 = (short)-13451;
long long int var_6 = 759181010705494337LL;
unsigned int var_9 = 727986648U;
unsigned int var_10 = 1583545124U;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)-28;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 852234337022223559ULL;
long long int var_21 = -7932516266452777304LL;
short var_22 = (short)-1847;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13588293121908930712ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
