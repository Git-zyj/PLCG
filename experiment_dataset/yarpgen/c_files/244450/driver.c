#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3454302420089192895LL;
long long int var_3 = 8250455645857908426LL;
unsigned char var_4 = (unsigned char)215;
signed char var_12 = (signed char)-102;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-84;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)46;
void init() {
}

void checksum() {
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
