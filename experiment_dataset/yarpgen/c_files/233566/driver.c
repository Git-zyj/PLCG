#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = 1496448638;
signed char var_6 = (signed char)-3;
unsigned char var_7 = (unsigned char)59;
long long int var_9 = -7710518864854804538LL;
unsigned int var_12 = 3326813749U;
int var_13 = -1175868085;
int zero = 0;
unsigned char var_14 = (unsigned char)253;
long long int var_15 = 8077703747622712553LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
