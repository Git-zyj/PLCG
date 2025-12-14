#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 553561545702657764LL;
long long int var_15 = 6521527743591557295LL;
int zero = 0;
short var_16 = (short)27175;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11484593021385293834ULL;
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
