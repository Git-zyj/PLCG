#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -863350476;
unsigned long long int var_8 = 8483954661991352566ULL;
unsigned int var_11 = 3610414881U;
short var_12 = (short)-12002;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4238165283U;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-19998;
void init() {
}

void checksum() {
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
