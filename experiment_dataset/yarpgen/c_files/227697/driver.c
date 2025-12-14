#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13831484548694798863ULL;
unsigned int var_10 = 726815760U;
long long int var_13 = 1647709758577671008LL;
long long int var_16 = -8912730056239806545LL;
int zero = 0;
unsigned char var_17 = (unsigned char)216;
signed char var_18 = (signed char)-121;
unsigned int var_19 = 1528008620U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
