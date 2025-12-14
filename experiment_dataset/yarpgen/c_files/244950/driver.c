#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 609729347U;
short var_6 = (short)29654;
unsigned int var_7 = 388139011U;
unsigned char var_11 = (unsigned char)221;
unsigned int var_12 = 3326452743U;
int zero = 0;
short var_20 = (short)3760;
unsigned char var_21 = (unsigned char)54;
long long int var_22 = 8535248642033503958LL;
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
