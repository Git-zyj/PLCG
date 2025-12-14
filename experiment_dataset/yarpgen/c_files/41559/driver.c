#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 981764001218551793LL;
unsigned int var_4 = 3155797334U;
unsigned int var_6 = 2307389393U;
long long int var_8 = 7290806968147747530LL;
signed char var_17 = (signed char)-4;
int zero = 0;
long long int var_20 = -6863016718985015336LL;
signed char var_21 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
