#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 670031170U;
long long int var_5 = 7597867207152705302LL;
int var_6 = 1607289450;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1355084077U;
unsigned long long int var_11 = 6638531277188197972ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)10;
short var_13 = (short)-31711;
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
