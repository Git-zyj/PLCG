#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)106;
_Bool var_4 = (_Bool)1;
long long int var_8 = 7353551141842186057LL;
long long int var_9 = -2100534126760083369LL;
unsigned short var_11 = (unsigned short)22302;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4185037929U;
long long int var_18 = 1775759627782630274LL;
short var_19 = (short)7052;
void init() {
}

void checksum() {
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
