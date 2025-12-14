#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)60;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)6;
int zero = 0;
int var_12 = -1351759039;
unsigned long long int var_13 = 6075403817856185983ULL;
unsigned int var_14 = 3154879267U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
