#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26662;
unsigned int var_1 = 1875702832U;
short var_3 = (short)-10900;
unsigned long long int var_6 = 11423943038493715158ULL;
long long int var_7 = -438102598936848746LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)22080;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
