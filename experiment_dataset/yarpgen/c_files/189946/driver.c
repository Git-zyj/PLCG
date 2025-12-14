#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3200213985680312507ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 11583518882825063393ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)158;
unsigned long long int var_13 = 17772060264575425643ULL;
unsigned long long int var_14 = 12272215835935765711ULL;
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
