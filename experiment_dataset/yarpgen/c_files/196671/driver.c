#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4882664726895555720ULL;
unsigned int var_2 = 1074456526U;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_15 = 4100076995284058735LL;
int zero = 0;
unsigned int var_16 = 1618737142U;
unsigned int var_17 = 1629210020U;
unsigned int var_18 = 3803045415U;
unsigned char var_19 = (unsigned char)249;
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
