#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17215895500255384005ULL;
_Bool var_14 = (_Bool)1;
long long int var_17 = -6353715034547177560LL;
int zero = 0;
int var_20 = 1572089224;
short var_21 = (short)-21667;
int var_22 = -1294497733;
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
