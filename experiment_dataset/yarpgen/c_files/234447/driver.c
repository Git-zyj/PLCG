#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5468235551752189091LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-16781;
long long int var_12 = 6089462654049307216LL;
int zero = 0;
short var_13 = (short)-26733;
int var_14 = 461841493;
void init() {
}

void checksum() {
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
