#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38920;
short var_3 = (short)31416;
unsigned long long int var_6 = 16747581305276095886ULL;
int var_11 = 1802079858;
unsigned char var_12 = (unsigned char)144;
unsigned int var_16 = 309624234U;
int zero = 0;
unsigned int var_18 = 1439149067U;
signed char var_19 = (signed char)48;
_Bool var_20 = (_Bool)1;
short var_21 = (short)23853;
unsigned long long int var_22 = 4039786906547593174ULL;
void init() {
}

void checksum() {
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
