#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
unsigned int var_6 = 361006074U;
_Bool var_8 = (_Bool)1;
int var_9 = -1984428487;
short var_11 = (short)-18498;
short var_13 = (short)32651;
unsigned int var_15 = 2192357053U;
short var_16 = (short)3761;
unsigned int var_18 = 2715485846U;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1539781456;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2029430599U;
unsigned short var_23 = (unsigned short)53609;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
