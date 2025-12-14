#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
signed char var_2 = (signed char)46;
long long int var_7 = -8396646397842223395LL;
signed char var_9 = (signed char)14;
long long int var_12 = 7246996067393156163LL;
unsigned char var_14 = (unsigned char)23;
signed char var_15 = (signed char)127;
long long int var_17 = -4543867623198777647LL;
int zero = 0;
unsigned long long int var_19 = 11720007986305065575ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
