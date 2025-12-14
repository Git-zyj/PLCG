#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1551292225;
unsigned char var_12 = (unsigned char)239;
unsigned long long int var_13 = 95378963286908420ULL;
int zero = 0;
signed char var_18 = (signed char)59;
unsigned int var_19 = 503937774U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
