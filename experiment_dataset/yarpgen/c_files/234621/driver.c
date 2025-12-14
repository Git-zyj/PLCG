#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1884653897U;
long long int var_7 = 271412985790050226LL;
int var_8 = -741400735;
unsigned int var_9 = 3698099704U;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 921862696;
long long int var_18 = -8144961939964568274LL;
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
