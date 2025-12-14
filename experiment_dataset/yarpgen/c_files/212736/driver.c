#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7573430621004264107LL;
unsigned char var_11 = (unsigned char)3;
unsigned char var_12 = (unsigned char)79;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-28402;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
