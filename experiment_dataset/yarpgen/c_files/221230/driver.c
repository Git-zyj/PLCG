#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23814;
unsigned short var_1 = (unsigned short)55541;
long long int var_5 = -3442502925972511020LL;
unsigned long long int var_6 = 2549883452429400701ULL;
unsigned long long int var_12 = 13412081648016752635ULL;
int zero = 0;
signed char var_15 = (signed char)-2;
unsigned long long int var_16 = 388648735716641363ULL;
short var_17 = (short)-4821;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
