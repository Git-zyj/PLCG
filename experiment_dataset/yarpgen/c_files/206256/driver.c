#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6412828462174281147LL;
unsigned char var_7 = (unsigned char)175;
unsigned long long int var_9 = 6532332810320134113ULL;
int zero = 0;
short var_12 = (short)19541;
unsigned char var_13 = (unsigned char)45;
long long int var_14 = -1402181456142602042LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
