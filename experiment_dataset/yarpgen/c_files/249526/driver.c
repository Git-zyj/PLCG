#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1700474480U;
long long int var_15 = -7127001055252789602LL;
unsigned char var_16 = (unsigned char)175;
long long int var_19 = 7058855511726823013LL;
int zero = 0;
unsigned int var_20 = 1644080812U;
short var_21 = (short)-7203;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2042175020U;
void init() {
}

void checksum() {
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
