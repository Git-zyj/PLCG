#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
_Bool var_6 = (_Bool)1;
int var_7 = -263421584;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 15855338436779836966ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
