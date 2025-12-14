#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1909163906;
signed char var_10 = (signed char)61;
unsigned short var_11 = (unsigned short)61939;
long long int var_12 = -4404745291869451104LL;
int zero = 0;
unsigned int var_15 = 3177660747U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
