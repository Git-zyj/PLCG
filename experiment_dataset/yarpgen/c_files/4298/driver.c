#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -104007732;
unsigned short var_5 = (unsigned short)19829;
int var_10 = -1450584731;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 5085884782532521733ULL;
unsigned short var_14 = (unsigned short)53239;
signed char var_15 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
