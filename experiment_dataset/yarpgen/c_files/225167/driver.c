#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -418847456;
unsigned short var_5 = (unsigned short)6951;
short var_10 = (short)20852;
unsigned int var_11 = 4273687971U;
int zero = 0;
long long int var_18 = -1975048664392999982LL;
unsigned short var_19 = (unsigned short)50929;
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
