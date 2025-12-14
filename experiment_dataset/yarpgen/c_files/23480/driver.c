#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -83981864001639817LL;
unsigned long long int var_2 = 2147660003682711083ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 8477655632600312955ULL;
short var_7 = (short)-11643;
unsigned long long int var_8 = 6831727595991042871ULL;
short var_9 = (short)-28716;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = 1555230339;
long long int var_13 = -8294818313429219859LL;
unsigned long long int var_14 = 1122182471632272300ULL;
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
