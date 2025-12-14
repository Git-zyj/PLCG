#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2100;
short var_1 = (short)26696;
long long int var_3 = -1171615734936557844LL;
unsigned int var_7 = 2212288829U;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)6524;
long long int var_11 = 1366782189511151445LL;
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
