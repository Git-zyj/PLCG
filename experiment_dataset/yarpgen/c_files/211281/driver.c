#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1639842072U;
signed char var_4 = (signed char)63;
unsigned short var_5 = (unsigned short)60253;
long long int var_13 = 4299435773705224668LL;
int zero = 0;
signed char var_16 = (signed char)3;
unsigned int var_17 = 3821392002U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
