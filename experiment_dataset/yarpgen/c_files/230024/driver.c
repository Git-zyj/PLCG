#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 467881150U;
unsigned short var_3 = (unsigned short)29208;
unsigned int var_4 = 1333751659U;
unsigned short var_5 = (unsigned short)40455;
long long int var_9 = 3034307377607481633LL;
unsigned int var_12 = 3946670222U;
unsigned int var_14 = 2056557459U;
int zero = 0;
unsigned int var_19 = 3881921920U;
unsigned int var_20 = 2009898747U;
unsigned short var_21 = (unsigned short)45099;
short var_22 = (short)174;
short var_23 = (short)-1307;
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
